
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
#define ll long long int

int main()
{
    ll n,k;
    cin >> n >> k;
    vector<ll>v(n);

    for(auto &x : v)
        cin >> x;
    for(ll i = 0;i< k;i++)
    {
        ll x;
        cin >> x;

        bool ok = 0;

        ll l =  -1,r = n;

        while(l < r - 1)
        {
            ll mid = (l+r)/2;

            if(v[mid] < x) l = mid;
            else r = mid;
        }
        //cout << "lower Bound : " << lower_bound(v.begin(),v.end(),x )- v.begin()<< endl;
        cout << r+1<< endl;


    }
}

