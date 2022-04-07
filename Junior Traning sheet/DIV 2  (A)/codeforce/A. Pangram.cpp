#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char s[107];
    scanf(" %[^\n]",s);
    //cout << s << endl;

    int ok[123] = {0};

    for(int i = 0;i < n;i++)
    {

        if(s[i] >= 'A'&& s[i] <= 'Z')
        {
            char c = s[i] + 32;
            s[i] = c;
            //cout << c << " ";
        }
        int k = s[i];
        ok[k] = 1;

    }
    int cnT = 0;
    for(int i = 97;i <= 122;i++)
    {
        //cout << i << endl;
        if(ok[i] == 0)
        {

            //cout << i << endl;
            cnT = 1;
            break;
        }
    }
    //cout << cnT << endl;
    if(cnT == 1) cout << "NO" << endl;
    else cout << "YES" << endl;

}
