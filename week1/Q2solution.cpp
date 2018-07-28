/*2. Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.
If the last word does not exist, return 0.
Note: A word is defined as a character sequence consists of non-space characters only.
Example:
Input: "Hello World"
Output: 5*/

#include <iostream>
#include <string>
#include<ctype.h>
using namespace std;


int last_word(string str,int e)
{
    int len = str.length();
    int i = len-1-e;
    while (i >= 0 && str[i] != ' ')
    {
        i--;
    }
    return len-i-1-e;
}

int main()
{
    string str;
    int n,e=0;
    cout << "Enter string : ";
    getline(cin, str);
        for(int j=str.length()-1;j>=0;j--)
    {
        if(str[j]==' ')
        e++;
        else
            break;
    }
    n=last_word(str,e);
    cout << "Last word size :"<<n;
    return 0;
}
//https://repl.it/@sannidhihabbu/lengthoflastword
