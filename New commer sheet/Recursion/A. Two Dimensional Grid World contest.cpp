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

 ll ux,uy,vx,vy;
 ll dp[1000][1000];
 ll fun(ll ux,ll uy,ll vx,ll vy)
 {
     //cout << ux << " " << uy << " " << vx << " " << vy << endl;
     if(ux >= vx || uy >= vy)
     {
         if(ux == vx || uy == vy)
         return 1;
         else return 0;
     }
     if(dp[ux][uy] == 1)
      {
          return dp[ux][uy];
      }

     ll b =fun((ux+uy),uy,vx,vy);
     ll a =fun(ux,(ux+uy),vx,vy);
     dp[ux][uy] =  a || b;
     return dp[ux][uy];
 }

int main()
{
    memset(dp,-1,sizeof(dp));

    ll t;
    cin >> t;
    for(int i =1;i <= t;i++) {
        cin >> ux >> uy >> vx >> vy;
        if(fun(ux%mod,uy%mod,vx%mod,vy%mod))
        cout << "Case " <<i<<": " << "YES" << endl;
        else   cout << "Case " <<i<<": " << "NO" << endl;
    }


}
