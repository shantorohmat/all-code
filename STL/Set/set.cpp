#include <iostream>
#include <algorithm>
#include <set>
#include <iterator>
#include <stdio.h>
using namespace std;

int main()
{
    set <int> s;
    set <int> :: iterator it;
    s.insert(20);
    s.insert(10);
    s.insert(30);
    s.insert(11);

    it = s.find(10);

    s.erase(it);

    for(it = s.begin();it != s.end();it++)
    {
        cout << *it << endl;
    }
    return 0;
}

