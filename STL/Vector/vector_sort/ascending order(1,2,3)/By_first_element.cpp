#include <bits/stdc++.h>
using namespace std;

int n,m,val = 0,cnt = 0;

void vector_sort_byfirst(vector<pair<int,int>> v)
{
    sort(v.begin(),v.end());

    cout << endl;
     for(auto it = v.begin();it != v.end();it++)
    {
        cout << it->first << " " << it->second << endl;
    }



}
int main()
{
     cin >> n >> m;
    vector <pair < int,int>>mp;

    for(int i = 1;i <= m;i++)
    {
        int a,b;
        cin >> a >> b;

        mp.push_back({a,b});
    }

    vector_sort_byfirst(mp);

}
