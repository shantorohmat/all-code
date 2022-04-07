#include <bits/stdc++.h>
using namespace std;

int n,m,val = 0,cnt = 0;
bool sort_bysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}

void vector_sort_bysecond(vector<pair<int,int>> v)
{
    sort(v.begin(),v.end(),sort_bysec);

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

    vector_sort_bysecond(mp);

}
