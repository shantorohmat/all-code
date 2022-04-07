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
#include <cstring>
#define ll unsigned long long int
#define ld long long double
using namespace std;

const int Size = 1e5;

int mod = 1e9+7;
int fast()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}

ll fix_mod(ll a,ll b)
{
    return (((a&b) + b)%b);
}

ll mod_add(ll a,ll b)
{
    return (a%mod + b%mod) % mod;
}
ll mod_mul(ll a,ll b)
{
    return ((a%mod) * (b%mod))%mod;
}
ll mod_sub(ll a,ll b)
{
    return (a%mod + b%mod) % mod;
}
ll single_mod(ll a)
{
    return (a%mod + mod)%mod;
}

ll add(ll a,ll b)
{
    if(a < 0) a += mod;
    if(b < 0) b += mod;
    if(a+b >= mod) return a+b-mod;
    return a+b;
}

ll dpx[1200][1200];

ll nCr(ll nn,ll rr) {
    if(rr == 0LL || rr == nn) return 1;
    if(rr > nn) return 0;
    if(dpx[nn][rr] != -1) return dpx[nn][rr];

    dpx[nn][rr] =  nCr(nn-1,rr-1) + nCr(nn-1,rr);
    return dpx[nn][rr];

}
ll mod_invers(ll a,ll n)
{
    ll res = 1;

    while(n)
    {
        if(n%2)
        {
            res = (res*a)%mod;
            n--;
        }
        else{
            a = (a*a)%mod;
            n/=2;
        }
    }
    return res;
}

ll gcd(ll a,ll b)
{
    if(b == 0LL) return a;
    return gcd(b,a%b);
}
int main()
{
    memset(dpx,-1,sizeof(dpx));

}