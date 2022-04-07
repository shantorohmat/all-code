#include <iostream>
#include <map>
#include <algorithm>
#include <iterator>
using namespace std;
int main()
{
    int n,x,y;

    cin >> n;

    map<int,int>m;
    map<int,int> :: iterator it;

    for(int i = 0;i < n;i++)
    {
      cin >> x;
      m[x]++;
    }
    /*while(1)
    {
        cin >> y;
        cout << m[y] << endl;
    }*/
    for(it = m.begin();it != m.end();it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    for(auto x : m)
        cout << x.first << " " << x.second << endl;

}
