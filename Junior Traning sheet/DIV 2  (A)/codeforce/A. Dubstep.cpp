#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;
int main()
{
    string s;
    cin >> s;

    for(int i = 2;i < s.size();i++)
    {
        if(s[i] == 'B' && s[i-1] == 'U' && s[i-2] == 'W')
        {
            s[i] = '0';
            s[i-1] ='0';
            s[i-2] = '0';

        }

    }
    int k = 0;
    for(int i = 0;i < s.size();i++)
    {

       // k = 0;
        if(s[i] != '0')
        {
            cout << s[i] ;
            k = 1;

        }
        else if(k == 1)cout << " ";

    }
}
