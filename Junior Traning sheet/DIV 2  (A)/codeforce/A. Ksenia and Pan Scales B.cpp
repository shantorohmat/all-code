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
    string s2 = s.substr(s.find('|')+1,s.length());



    int len1 = s1.length();
    int len2 = s2.length();
    int len3 = p.length();

    int len = abs(len1 - len2);

    for(auto x : p)
    {
        if(s1.length() <= s2.length()) s1+=x;
        else s2 += x;

    }

    if(s1.length() == s2.length()) cout << s1 << "|" << s2 << endl;
    else cout << "Impossible" << endl;



}

