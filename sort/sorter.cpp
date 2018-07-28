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
            for(j=0;j<n;i++,j++)
            c[i]=b[j];

    cout<<"given array is \n";
    for(i=0;i<m+n;i++)
        cout<<c[i]<<" ";
        for(i=0;i<(m+n)-1;i++)
            for(j=0;j<(m+n)-1-i;j++)
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
    int len1= 0,len2=0,f,f1;
       int arr1[100000],arr2[100000];
    int x,x1;
    ifstream fin,fin1;
    fin.open("sortedfile11.txt");
  while(fin>>x)
{
    arr1[len1] = x;
    len1++;
    if (fin.peek() == ',')
        fin.ignore();
}
    fin.close();
        fin1.open("sortedfile2.txt");
  while(fin1>>x1)
{
    arr2[len2] = x1;
    len2++;
    if (fin1.peek() == ',')
        fin1.ignore();
}
    fin1.close();
    cout<<"n : "<<len1<<endl;
    for(i=0;i<len1;i++)
    {
        cout << arr1[i] << " ";
    }
     cout<<"\n n : "<<len2<<endl;
    for(j=0;j<len2;j++)
    {
        cout << arr2[j] << " ";
    }
   f=find_order(arr1,len1);
 if(f)
 printf("\n file1 is sorted\n");
 else
 printf("\nfile1 not sorted\n");
   f1=find_order(arr2,len2);
 if(f1)
 printf("\n file2 is sorted\n");
 else
 printf("\nfile2 not sorted\n");
 if(f==1&&f1==1)
   amerg(arr1,arr2,len1,len2);
   else
    bubble(arr1,arr2,len1,len2);
       return 0;
}
