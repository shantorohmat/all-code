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
#define ll unsigned long long int
#define ld long long double
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
ll n;
ll dp[1000000];
ll fun(ll k)
{
    if(k >= n)
    {
        if(k == n)
            return 1;
        else return 0;
    }
    if(dp[k] != -1)
        return dp[k];

    ll a = 0;
     a = mod_add(a , fun(k+1));
     a = mod_add(a , fun(k+2));
     a = mod_add(a , fun(k+3));
     a = mod_add(a , fun(k+4));
     a = mod_add(a , fun(k+5));
     a = mod_add(a , fun(k+6));

     dp[k] = a%mod;
     return dp[k];
}
int main()
{
    fast();
    memset(dp,-1,sizeof(dp));

    cin >> n;
    cout << fun(0)%mod << endl;
}
