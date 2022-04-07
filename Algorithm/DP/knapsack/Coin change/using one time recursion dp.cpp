
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
int coins[] = {2,5,9,13,15};
int n = sizeof(coins);
int dp[3000][30000];
int fun(int i,int w)
{
    if(0 > w)
        return INF;
    if(i == n)
    {
        if(w == 0) return 0;
        else return INF;
    }
    if(dp[i][w] != -1)
        return dp[i][w];

    dp[i][w] = min(fun(i+1,w),1 + fun(i+1,w - coins[i]));
    return dp[i][w];
}
int main()
{
    memset(dp,-1,sizeof(dp));
    int w = 22;
    cout << fun(0,w) << endl;
}
