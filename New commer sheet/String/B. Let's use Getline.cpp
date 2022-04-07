
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    string s;

    getline(cin,s);

    int d = s.size();

    for(int i = 0;i < d;i++)
    {
        if(s[i] == 92) break;

        cout << s[i];
    }
    return 0;
}
