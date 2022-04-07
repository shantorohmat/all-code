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
using namespace std;
const int size = 1e7 + 7;

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
int phi[size];
int vis[size];

void sieve()
{
    for(int i = 0;i <= size;i++)  phi[i] = i;
    for(int i = 2;i <= size;i++)
    {
        if(vis[i]) continue;
            for(int j = i;j <= size;j+=i)
            {
                vis[j] = true;
                phi[j] = phi[j] / i;
                phi[j] = phi[j] * (i - 1);


            }

    }
}

int main()
{
    sieve();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        cout << phi[n] << endl;
    }
}

