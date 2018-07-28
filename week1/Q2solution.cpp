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


int last_word(string str)
{
    int len = str.length();
    int i = len-1;
    while (i >= 0 && str[i] != ' ')
    {
        i--;
    }
    return len-i-1;
}

int main()
{
    string str;
    int n;
    cout << "Enter string : ";
    getline(cin, str);
    n=last_word(str);
    cout << "Last word size :"<<n;
    return 0;
}
//repl.it/@sannidhihabbu/lengthoflastword
