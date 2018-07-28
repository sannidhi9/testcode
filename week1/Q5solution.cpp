/*5. Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.
Example 1:
Input: [3,0,1]
Output: 2


Example 2:
Input: [9,6,4,2,3,5,7,0,1]
Output: 8
*/
#include <iostream>
using namespace std;

int missing_ele(int arr[],int len)
{
 int c,j,i;
 for(i=0;i<=len;i++)
 {
    for(j=0;j<len;j++)
 {
     if(arr[j]==i)
        break;
     else
     c++;

 }
 if(c==len)
 break;
 else
    c=0;
}
return i;
}
int main()
{
    int arr[1000],len,i,k;
	cout<<"Enter array size : ";
	cin>>len;
	cout<<"Enter array elements : ";
	for(i=0; i<len; i++)
	{
		cin>>arr[i];
	}
	k=missing_ele(arr,len);
	cout<<"missing element : "<<k;

    return 0;
}
//https://repl.it/@sannidhihabbu/missingelement

