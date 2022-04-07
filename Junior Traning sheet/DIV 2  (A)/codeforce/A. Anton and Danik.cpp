#include <iostream>
#include <algorithm>
#include <string>
#include <stdio.h>

using namespace std;
int main()
{
    int n;
    scanf("%d ",&n);

    string s;
    getline(cin,s);
    int sa = 0,sd = 0;

    for(int i = 0;i < s.size();i++)
    {
        if(s[i] == 'A')
            sa++;
        else if(s[i] == 'D')
            sd++;
    }

    if(sa == sd)cout << "Friendship" << endl;
    else if(sa > sd) cout << "Anton" << endl;
    else if(sa < sd) cout << "Danik" << endl;


}
