#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int t;

    cin >> t;

    while(t--)
    {
       char *s = new char [10000];

       cin >> s;

       for(int i = strlen(s)-1;i >= 0;i--)
       {
           cout << s[i] << ' ';

       }
       cout << endl;
    }
    return 0;
}
