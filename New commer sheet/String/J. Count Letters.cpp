#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
using namespace std;
int main()
{

        string  s;

        ///scanf(" %[^\n]",s);

        ///cin.getline(s,100001);

        getline(cin,s);

        int count[26];

        for(int i = 0;i < 26;i++)
        {
            count[i] = 0;
        }

        for(int i = 0;i < s.size();i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            count[s[i]-'a']++;

        }

        for(int i = 0;i < 26;i++)
        {
            if(count[i] != 0)
            {
                char l = i + 'a';
                cout << l << " : " << count[i] << endl;
            }

        }
        return 0;


}
