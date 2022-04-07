
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
#define INF 999999999
using namespace std;
const int Size = 1e6+7;
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

int coin[Size];
int dp[1000][1000];
int fun(int n,int w)
{
    int dp[n+1][w+1];

    for(int i = 0;i <= n;i++)
    {
        for(int j = 0;j <= w;j++)
        {
            if(j == 0)
            dp[i][j] = 0;

            else if(i == 0)
                dp[i][j] = INF;

            else if(coin[i-1] > j)
                dp[i][j] = dp[i-1][j];

            else
                dp[i][j] = min(dp[i-1][j],1+dp[i][j - coin[i-1]]);


        }
    }

    return dp[n][w] == INF ? -1 : dp[n][w];
}
int main()
{
    int n,w;
    cin >> n >> w;

    for(int i = 0;i < n;i++)
    {
        cin >> coin[i];
    }
    cout <<fun(n,w) << endl;
}
