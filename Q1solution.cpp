/*1. Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
Note: For the purpose of this problem, we define empty string as valid palindrome.
Example 1:
Input: "A man, a plan, a canal: Panama"
Output: true
Example 2:
Input: "race a car"
Output: false
*/

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
   string s;
   char c,str[1000];
 int j=0,p=0,i=0;
   cout << "Enter a string: ";
    getline(cin,s);
for(i=0;i<s.length()+1;i++)
 {
     c=s[i];
      if((c>='A'&& c<='Z'|| c>='a'&& c<='z'))
{
    str[j++]=c;

    }
}
cout<<"text only strig: "<<str<<endl;
  for(i=0;i<j/2;i++)
    {
        if(str[i]==str[j-1-i])
        {
            p++;
        }
    }
    if(j/2==p)
        cout<<"Entered string is palindrome";
    else
        cout<<"Entered string is not palindrome";

return 0;
}
