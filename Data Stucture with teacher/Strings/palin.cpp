#include <iostream>
using namespace std;
int main()
{
    cout << "This program is to find out palindrome :"  << endl;

    cout << "Input a word : " << endl;

    string s,p;

    cin >> s;

    int i = 0, j = 0,f= 0;

    for( i = 0;s[i] != '\0';i++)
    {

    }
     i = i - 1;

     for( j = 0;i >= 0;i--,j++)
     {
         p[j] = s[i];
     }
     p[j] = '\0';

     for(i = 0,j = 0;s[i] != '\0' && p[j] != '\0';i++,j++)
     {
         if(s[i] != p[j])
         {
             f = 1;
             break;
         }
     }
     if(f == 1) cout << "Not palindrome" << endl;
     else cout << "Palindrome" << endl;
}

