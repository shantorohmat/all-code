#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;

    cin >> n;

    while(n--)
    {
        char s[100000];

        cin >> s;

        int d = strlen(s);

        if(d > 10)
        {
            cout << s[0] << d-2 << s[d-1] << endl;
        }
        else
            cout << s << endl;

    }
    return 0;
}
