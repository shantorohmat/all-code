
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    string s,t;

    cin >> s;

    cin >> t;

    int i ,j ;

    for( i = 0,j = 0;j < t.length();j++)
    {
        if(s[i] == t[j])
        {
            i++;
        }
    }
    cout << i + 1 << endl;
}
