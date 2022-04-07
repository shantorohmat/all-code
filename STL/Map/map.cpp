#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    map <string,int> m;

    map <string,int> :: iterator it;

    m["shanto"] = 20;
    m["rohmat"] = 21;
    m["shuvo"] = 22;
    m.insert(make_pair("akhi",23));

    for( it = m.begin();it != m.end();it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
}
