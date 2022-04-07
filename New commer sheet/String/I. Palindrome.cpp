#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[1000],p[1000];

    cin >> s;

    int d = strlen(s);

    for(int i = d-1,j = 0;i >= 0;i--,j++)
    {
        p[j] = s[i];

    }
    p[d] = '\0';

    if(strcmp(s,p) == 0)
    {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;

    return 0;


}

