#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <math.h>
#define ll long long int
using namespace std;
  ll n,k;
bool ok(ll x)
{
    return ((x*(x+1))/2 - (n - x) >= k);

}
int main()
{

    cin >> n >> k;
    ll l = -1,r = n ;
    int j  = 100;

    while(j--)
    {
        ll mid = l + (r - l)/2;
        if(ok(mid)) r = mid;
        else l = mid;
    }
    cout <<  n - r  << endl;

}
