#include <iostream>
#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <stdio.h>
#include <set>
using namespace std;

using namespace std;
vector<string>v[10000],arr[10000],c[10000];

int main()
{
    int t;
    cin >> t;

    for(int x = 1;x <= t;x++)
    {
        int m,n;
        cin >> m >> n;
        string s;
        map<string,string>mp;


        for(int i = 0;i < m;i++)
        {
            cin >>s;
            v[i].push_back(s);

        }
        for(int j = 0;j < n;j++)
        {
            cin >>s;
            arr[j].push_back(s);
        }
        for(int i = 0,k = 0;i < m;i++,k++)
        {
            for(int j = 0 ;j < n;j++)
            {
                //v[i][0] = v[i][0] + arr[j][0];
                mp.insert(pair<string, string>(v[i][0],arr[j][0]));
            }

        }
        cout<< "Case " <<x<<": " << mp.size() << endl;

    }
}
