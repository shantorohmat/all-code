/// /// initialize || size || insert || || reverse || find

/// how to sort i don't know
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int s[8] = {1,2,10,4,5,6,7,8};///0 1 2 3 4 5 6 7


    list <int> l(s,s+8);

    list <int> :: iterator it;

    cout << "size : " << l.size() << endl;

    //sort(l.begin(),l.end());

    it = find(l.begin(),l.end(),5);

    cout << *it <<endl;

    l.insert(it,400);


    cout << "Element : " << endl;

    l.reverse();



    for(it = l.begin();it !=  l.end();it++)
    {
        cout << *it << endl;
    }

    return 0;

}


