#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[100001];

    cin >> s;

    int d = strlen(s);

    for(int i = 0;i < d;i++)
    {
        if(s[i] == ',')
        {
            s[i] = ' ';
        }
        else if(s[i] >= 'A' && s[i] <= 'Z' )
        {
            s[i]  = s[i] + 32 ;
        }
        else if(s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i]-32;
        }
    }

    for(int i = 0;i < d;i++)
    {
        cout << s[i] ;
    }
    cout << endl;


    return 0;
}
