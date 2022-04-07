#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define  ll long long int
using namespace std;
ll w,h,n;
bool ok(ll x)
{
    return ((x/w)*(x/h)) >= n;
}
int main()
{

    cin >> w >> h >> n;

    ll l = -1,r = 1;
    while(!ok(r)) r *= 2;

    while(l < r -1)
    {
        ll mid = l+(r - l)/2;

        if(ok(mid)) r = mid;
        else l = mid;
    }
    cout << r << endl;
}
