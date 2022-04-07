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
   for(auto &x : v)cin >> x;

    for(ll i = 0;i< k;i++)
    {
        ll x;
        cin >> x;

        bool ok = 0;

        ll l = 0,r = n-1;

        while(l <= r )
        {
            ll mid = floor((l+r)/2);
            if(v[mid] == x) {
                    ok = 1;
                    break;
            }
            else if(v[mid] > x) r = mid - 1;
            else  l = mid + 1;

        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }


}
