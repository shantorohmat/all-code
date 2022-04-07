#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int count = 0;
    char s[10000],m[10000];

    cin >> s;

    for(int i = strlen(s)-1,j = 0;i >= 0;j++,i--)
    {

        m[j] = s[i];
    }
    for(int i = 0;i < strlen(s) ;)
    {
         if(m[i] == 48)
        {
         i++;
         count = i;
        }
         else if( m[i] > 48) break;
    }

    for(int i = count;i <strlen(s) ;i++ )
    {
        cout << m[i];
    }
    cout << endl;

    if(strcmp(s,m)== 0) cout << "YES" << endl;

    else cout << "NO"<< endl;

    return 0;

}
