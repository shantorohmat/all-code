#include <set>
#include <iostream>
#include <map>
using namespace std;

int main()
{
    multiset < int> m;
    multiset < int> :: iterator it;

    m.insert(20);
    m.insert(20);
    m.insert(20);

    for(it = m.begin(); it != m.end();it++)
    {
        cout << *it<< endl;
    }
    cout << endl;
}
