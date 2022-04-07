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
#define ll unsigned long long  int
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
ll dp[1000000];

ll a, b, c, d, e, f;
ll fn(ll n) {

   dp[0] = a;
   dp[1] = b;
   dp[2] = c;
   dp[3] = d;
   dp[4] = e;
   dp[5] = f;

   for(int i = 6;i <= n;i++)
   {
       ll z = dp[i-1] + dp[i-2] + dp[i-3] + dp[i-4] + dp[i-5]+dp[i-6];
       dp[i] = z % 10000007;
   }
   return dp[n];
 }
int main() {
    fast();
    memset(dp,-1,sizeof(dp));
     ll n, t;
    cin >> t;

    for (int i = 1; i <= t; ++i) {
      cin >> a >> b >> c >> d >> e >> f >> n;

        printf("Case %d: %d\n", i, fn(n) % 10000007);
    }
    return 0;
}
