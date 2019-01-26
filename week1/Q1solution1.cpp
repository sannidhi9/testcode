/*1. Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
Note: For the purpose of this problem, we define empty string as valid palindrome.
Example 1:
Input: "9A man, a plan, a canal: Panama9"
Output: true
Example 2:
Input: "race a car"
Output: false
*/

#include <iostream>
#include <string>
#include<ctype.h>
using namespace std;
int palindrome(char str[],int j)
{
    int p=0;
     for(int i=0;i<j/2;i++)
    {
        if(tolower(str[i])== tolower(str[j-1-i]))
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
int main()
{
   string s;
   char c,str[1000];
 int j=0,i=0;
   cout << "Enter a string: ";
    getline(cin,s);
for(i=0;i<s.length()+1;i++)
 {
     c=s[i];
      if((c>='A'&& c<='Z'|| c>='a'&& c<='z'|| c>='0'&& c<='9'))
    str[j++]=c;

}
 palindrome(str,j);
return 0;
}
//https://repl.it/@sannidhihabbu/stringypalindrome-1

//https://repl.it/@sannidhihabbu/stringypalindrome-1
