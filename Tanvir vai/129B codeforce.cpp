#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
//#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;

    cin >> t;

    while(t--)
    {
        ll n,x,y,p,q,f = 0;
        string s = "";
        cin >> n;
        vector <pair<ll,ll> >v;
        for(int i = 0;i < n;i++)
        {
            cin >> x >> y;
            v.push_back(make_pair(x,y));
        }
        sort(v.begin(),v.end());
        x = 0,y = 0;
        for(int i = 0;i < v.size();i++)
        {
            p = v[i].first;
            q = v[i].second;
            if(p < x || q < y )
            {
                f = 1;
                break;
            }
            while(x < p)
            {
                x++;
                s+= 'R';

            }
            while (y < p)
            {
                y++;
                s+= 'U';
            }

        }
        if(f == 1)
            cout << "No" << endl;
        else
        {
            cout << "Yes" << endl;
            cout << s << endl;
        }

    }
}
