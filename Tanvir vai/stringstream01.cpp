#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;

    getline(cin,s);

    stringstream ss;

    ss << s;

    vector <string> v;


    string x;

    while(ss >> x )
    {
        v.push_back(x);

    }

    for(int i = 0;i < v.size();i++)
        cout << v[i] << endl;
}
