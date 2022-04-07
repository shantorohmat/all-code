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
int n;
int dp[1200][1200];
  int *c = new int[n];
int table(int i,int w)
{

    return dp[i][w];

}
void DP(int w)
{
    for(int i = 0;i < w;i++ ) dp[w][i]  = 0;
    for(int i = 0;i < n;i++ ) dp[i][w]  = 0;
}
int coin(int target,int c[])
{
    DP(target);

    for(int i = n-1;i >= 0;i--)
    {
        for(int w = 0;w <= target;w++)
        {

    if(w >= c[i+1]) {
             int ans_1 = 1+dp[i][w - c[i]];
             int ans_2 = dp[i+1][w];
             dp[i][w] = min(ans_1,ans_2);
    }
    else
        dp[i][w] = dp[i+1][w];
        }
    }
    return dp[0][target];

}
int main()
{
    memset(dp,-1,sizeof(dp));
    cout << "Input coin number : " ;
    cin >> n;


    cout << "input coin : " ;
    for(int i = 0;i < n;i++)
    {
        cin >> c[i];
    }
    cout << "Input target amount money : " ;
    int w;
    cin >> w;
    cout << coin(w,c);

}


