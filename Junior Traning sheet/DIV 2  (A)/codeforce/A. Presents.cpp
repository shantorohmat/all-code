#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    int n,x;
    cin >> n;
    map<int,int>mp;

    for(int i = 0;i < n;i++)
    {
        cin >> x;

        mp.insert({x,i});

    }

    for(auto x : mp)
    {
        cout << x.second +1<< " ";
    }
}
