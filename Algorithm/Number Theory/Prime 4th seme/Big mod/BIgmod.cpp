
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
const int Size = 1e7;
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

ll Bigmod(ll b,ll p,ll m)
{
    if(p == 0) return 1;
    else if(p%2) ///(a*b) % mod = ((a%m) * (b%m))%m
    {
        ll a = b % m;/// (a%m)
        ll c = Bigmod(b,p-1,m)%m;///(b%m)

        return (a*c)%m;///((a%m) * (b%m))%m
    }
    else if(p%2 == 0)
    {
        ll a = Bigmod(b,p/2,m) % m;
        return (a*a)%m;

    }
}
int main()
{
    ll b,p,m;
    while(cin >> b >> p >> m){


    cout << Bigmod(b,p,m) << endl;
    }
}
