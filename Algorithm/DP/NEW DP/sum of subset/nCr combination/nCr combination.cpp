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
#define ll unsigned long long int
#define ld long long double

using namespace std;

const int INF = 1e7;


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
int n,r;
int dp[120][120];



int nCr(int n,int r) {
    if(r == 0 || r == n) return 1;
    if(r > n) return 0;
    if(dp[n][r] != -1) return dp[n][r];

    dp[n][r] =  nCr(n-1,r-1) + nCr(n-1,r);
    return dp[n][r];

}
int main()
{
    memset(dp,-1,sizeof(dp));
    cin >> n >> r;
    cout << nCr(n,r);
}




