
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
#define ll long long int
#define ld long long double
#define INF 999999
const int Size = 1e8;
using namespace std;

int mod = 1e9+7;
int fast()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}

int fix_mod(int a,int b)
{
    return (((a&b) + b)%b);
}

int mod_add(int a,int b)
{
    return (a%mod + b%mod) % mod;
}

int add(int a,int b)
{
    if(a < 0) a += mod;
    if(b < 0) b += mod;
    if(a+b >= mod) return a+b-mod;
    return a+b;
}
ll gcd(ll a,ll b)
{
    if(b == 0LL) return a;
    return gcd(b,a%b);
}
 ll d[Size];

int  factor_n(ll n)
{
     ll m = 0;

    for(ll i = 1;i  <= sqrt(n);i++)
    {
        if(n%i == 0)
        {
            d[++m] = i;

            if((n/i) != i)
                d[++m] = n/i;
        }
    }
    return m;


}

int main()
{
    ll n;
    for(int i = 0;cin >> n;i++){
            if(n == 0) return 0;

    int m = factor_n(n);

     ll cnt = 1;
    for(ll i = 1;i <= m;i++)
    {
        for(ll j = i+1;j <= m;j++)
        {
            ll GCD = gcd(d[i],d[j]);
            ll mul = d[i] * d[j];
            ll lcm = mul / GCD;

            if(lcm == n)
                cnt++;
        }
    }
    cout<< n << " " << cnt << endl;
    }
    d[Size] = {0};


}



