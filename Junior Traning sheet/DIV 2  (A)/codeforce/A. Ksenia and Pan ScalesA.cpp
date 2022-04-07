#include <iostream>
#include <string.h>
#include <cstring>
#include <math.h>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    string s,p;
    cin >> s >> p;

    string s1 = s.substr(0,s.find('|'));
    string s2 = s.substr(s.find('|')+1,s.size());



    int len1 = s1.length();
    int len2 = s2.length();
    int len3 = p.size();

    int len = abs(len1 - len2);

    if(len > len3)
    {
        cout << "Impossible" << endl;
    }
    else if(len == len3)
    {
        if(len1 > len2)
            s2 = s2 + p;
        else
            s1 = s1 + p;
        if(s1.length() == s2.length()) cout << s1 << "|" << s2 << endl;
        else cout << "Impossible" << endl;
    }
    else if(len < len3)
    {
        for(int i = 0;i < p.length();i++)
        {
            if(s1.length() <= s2.length())
            {
                s1 += p[i];
            }
            else s2 += p[i];
        }
        if(s1.length() == s2.length()) cout << s1<< "|" << s2 << endl;
        else cout << "Impossible" << endl;

    }



}
