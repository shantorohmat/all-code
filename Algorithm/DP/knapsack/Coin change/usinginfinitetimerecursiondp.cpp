
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

int coins[1000000];

int n ;
int dp[1000000];
int coin_change( int n, int k) {



  int i, j;
  for(j=1; j<=n; j++) {
    int ans = INF;

    for(i=1; i<=k; i++) {
      if(j >= coins[i]) {
        ans = min(ans, 1+dp[j-coins[i]]);
      }
    }
    dp[j] = ans;
  }
  return dp[n];
}

int main() {
    fast();
  memset(dp,0,sizeof(dp));
  int w ;
  cin >> n >> w;
  coins[0] = 0;
  for(int i = 1;i <= n;i++)
  {
      cin >> coins[i];
  }

  cout <<coin_change( w, 3) << endl;
    return 0;
}
