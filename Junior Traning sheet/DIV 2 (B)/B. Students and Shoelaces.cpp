#include <functional>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>
#include <map>
#include <set>
#include <queue>
using namespace std;
#define ll long long int

int n, m;
map<int, set<int> > v;

int main()
{


    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].insert(b);
        v[b].insert(a);
    }
    int ans = 0;
    bool flag = true;
    while (flag)
    {
        flag = false;
        set<pair<int, int> >free;
        for (auto i : v)
        {
            if (i.second.size() == 1)
            {
                free.insert(make_pair(i.first, *i.second.begin()));
            }
        }
        if (free.size() > 0)
        {
            ans++;
            for (auto j : free)
            {
                v[j.first].erase(j.second);
                v[j.second].erase(j.first);
            }
            flag = true;
        }
    }
    cout << ans << endl;

}
