#include <iostream>
#include <set>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    set<int>s;
    string p;
    getline(cin,p);
    for(int i = 0;i < p.size();i++)
    {
        if(p[i] >= 'a' && p[i] <= 'z')
            {
                s.insert(p[i]);
            }
    }
    cout << s.size() << endl;

}
