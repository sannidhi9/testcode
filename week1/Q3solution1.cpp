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
	int arr[50],len,i,j,count0=0;
	cout<<"Enter array size : ";
	cin>>len;
	cout<<"Enter array elements : ";
	for(i=0; i<len; i++)
	{
		cin>>arr[i];
	}

	for(i=0;i<len;i++)
    {
        if(arr[i]==0)
        {
            count0++;
            for(j=i+1;j<len;j++)
            {
                arr[j-1]=arr[j];
            }
        }
    }




		cout<<"Now the new array is :\n";
		for(i=0; i<len; i++)
		{
			cout<<arr[i]<<" ";
		}
	return 0;
}
