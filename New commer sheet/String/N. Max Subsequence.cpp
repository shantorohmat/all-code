#include <iostream>
using namespace std;

int main()
{
    int t;

    cin >> t;

    string s;

    int x = 0,c = 0;

    cin >> s;

    for(int i = 0;i < s.size();i++)
    {
        if(s[i] == s[i+1])
            x++;

        c++;
    }

    cout << c-x << endl;

    return 0;
}
