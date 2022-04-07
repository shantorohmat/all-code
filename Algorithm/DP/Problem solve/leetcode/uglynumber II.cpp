
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

void  ugly(int n)
{
    vector<int>v;
    set<int>s;

    s.insert(1);
    int x = 0;
    for (int i = 0; i < n; i++)
    {

        x += 2;
        s.insert(x);

    }
    x = 0;
    for (int i = 0; i < n; i++)
    {
        x += 3;
        s.insert(x);
    }
    x = 0;
    for (int i = 0; i < n; i++)
    {
        x += 5;
        s.insert(x);
    }

    for (auto i : s)
    {
        int j = i;
        cout << j << " ";
        v.push_back(j);
    }
    cout << endl << v[n - 1] << endl;


}

int main()
{

//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//#endif

    int k;
    cin >> k;
    ugly(k);

}
