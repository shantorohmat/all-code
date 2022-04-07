#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    list <int> l;

    list <int> :: iterator it;

    l.push_back(4);
    l.push_back(44);
    l.push_back(444);
    l.push_back(4444);
    l.push_back(44444);
    l.push_front(100);
    l.push_front(1000);
    l.push_front(10000);

    for(it = l.begin();it != l.end();it++ )
    {
        cout << *it << endl;
    }

    return 0;

}
