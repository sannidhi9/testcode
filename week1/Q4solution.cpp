/*4. Given an array, rotate the array to the right by k steps, where k is non-negative.
Example 1:
Input: [1,2,3,4,5,6,7] and k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]


Example 2:
Input: [-1,-100,3,99] and k = 2
Output: [3,99,-1,-100]
Explanation:
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
*/
#include <iostream>
using namespace std;
int main()
{
    int arr[50],len,t,k,i;
	cout<<"Enter array size : ";
	cin>>len;
	cout<<"Enter array elements : ";
	for(i=0; i<len; i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the value of k : ";
	cin>>k;
	for(i=0;i<k;i++)
	{
	    t=arr[len-1];
	    for(int j=len-1;j>=0;j--)
        {
            arr[j+1]=arr[j];
        }
       arr[0]=t;
	}
	cout<<"new array is : ";
	for(i=0; i<len; i++)
		{
			cout<<arr[i]<<" ";
		}
	return 0;
}
//https://repl.it/@sannidhihabbu/rightrotate
