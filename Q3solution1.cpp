/*3. Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Example:
Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
Can you do it without creating a new array?
*/
#include <iostream>
using namespace std;
int main()
{
	int arr[50],arr1[50],len,i,j=0,c=0;
	cout<<"Enter array size : ";
	cin>>len;
	cout<<"Enter array elements : ";
	for(i=0; i<len; i++)
	{
		cin>>arr[i];
	}
	for(i=0; i<len; i++)
	{
		if(arr[i]!=0)
		{
			arr1[j]=arr[i];
			j++;
		}
	}
	for(i=j;i<len;i++)
       arr1[i]=0;

		cout<<"Now the new array is :\n";
		for(i=0; i<len; i++)
		{
			cout<<arr1[i]<<" ";
		}
	return 0;
}
//https://repl.it/@sannidhihabbu/tailingzeroarray
