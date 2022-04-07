#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap <string, int> m;
    multimap <string, int> :: iterator it;

    m.insert(make_pair("shanto",20));
    m.insert(make_pair("shanto",21));
    m.insert(make_pair("shanto",22));

    for(it = m.begin(); it != m.end();it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
}
