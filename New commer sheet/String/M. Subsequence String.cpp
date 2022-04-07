#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    string s;

    int c = 0;

    cin  >> s;

    string p = "hello";

    for(int i = 0,j = 0;i < s.size();i++)
    {
        if(s[i] == p[j])
        {

            if(p[j] == 'o')
            {
                c = 1;
                cout << "YES" << endl;
            }
            j++;

        }

    }
    if(c == 0)
    {
        cout << "NO" << endl;
    }

    return 0;
}

