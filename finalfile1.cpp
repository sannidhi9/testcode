#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int i,j,k,c[200000];

int find_order(int e[],int len)
{
  int j;
  for(j=0; j<len-1; j++)
  {
     if(e[j]>e[j+1])
           return 0;
      else
         continue;
  }

         return 1;
}

int amerg(int a[],int b[],int m,int n)
{
    ofstream fout;

        i=0;
        k=0;
        j=0;
      while(i<m&&j<n)
      {

        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
        k++;
      }
      while(i<m)
        {
            c[k++]=a[i++];
        }

        while(j<n)
       {
        c[k++]=b[j++];
       }


        cout<<"\nsorted array is\n";
        for(i=0;i<m+n;i++)
            cout<<c[i]<<" ";
                fout.open("output.txt");
    for(int l=0;l<m+n;l++)
    {
        fout<<c[l];
        fout<<" ,";
    }
    return 0;
}

int bubble(int a[],int b[],int m,int n)
{
    int t;
     ofstream fout1;
     i=0;
     j=0;

        for(i=0;i<m;i++)
        {
            c[i]=a[i];
        }
            for(j=0;j<m;i++,j++)
            c[i]=b[j];

    cout<<"given array is \n";
    for(i=0;i<m+n;i++)
        cout<<c[i]<<" ";
        for(i=0;i<(m+n)-1;i++)
            for(j=0;j<(m+n)-1;j++)
            {
                if(c[j]>c[j+1])
                {
                    t=c[j];
                    c[j]=c[j+1];
                    c[j+1]=t;
                }
                }
       cout<<"\nsorted array is \n";
    for(i=0;i<(m+n);i++)
        cout<<c[i]<<" ";
                        fout1.open("output2.txt");
    for(int l=0;l<(m+n);l++)
    {
        fout1<<c[l];
        fout1<<" ,";
    }
    return 0;
}

int main()
{
    int p= 0,q=0,f,f1;
       int r[100000],s[100000];
    int x,x1;
    ifstream fin,fin1;
    fin.open("do1.txt");
  while(fin>>x)
{
    r[p] = x;
    p++;
    if (fin.peek() == ',')
        fin.ignore();
}
    fin.close();
        fin1.open("do2.txt");
  while(fin1>>x1)
{
    s[q] = x1;
    q++;
    if (fin1.peek() == ',')
        fin1.ignore();
}
    fin1.close();
    cout<<"n : "<<p<<endl;
    for(i=0;i<p;i++)
    {
        cout << r[i] << " ";
    }
     cout<<"\n n : "<<q<<endl;
    for(j=0;j<q;j++)
    {
        cout << s[j] << " ";
    }
   f=find_order(r,p);
 if(f)
 printf("\n file1 is sorted\n");
 else
 printf("\nfile1 not sorted\n");
   f1=find_order(s,q);
 if(f1)
 printf("\n file2 is sorted\n");
 else
 printf("\nfile2 not sorted\n");
 if(f==1&&f1==1)
   amerg(r,s,p,q);
   else
    bubble(r,s,p,q);
       return 0;
}
