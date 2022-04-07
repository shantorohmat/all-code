#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main()
{
    int a,n;

    list<int>s;

    cin >> n;

    while(n--)
    {
        cin >> a;
        s.push_back(a);

    }
    for(auto x : s)
    {
        cout << x << endl;
    }
}

