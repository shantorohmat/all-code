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
    int wt[] = {1,2,3};
    int p[] =  {2,3,5};
    int n = 5;
    int dp[120][120];
    int cnt = 0;
int knapsack(int target,int i)
{
//    for(int i = 0;i <= n;i++ ) dp[i][target]  = 0;
//    for(int i = 0;i <= target;  i++ ) dp[n][i]  = 0;
    for(int i = 0;i < n;i++)
    {
        for(int w = 0;w  <= target;w++)
        {
            if(i == 0 || w == 0) dp[i][w] = 0;
            if(wt[i] > w)
                dp[i][w] = dp[i-1][w];
            else{
                int val_1 = dp[i-1][w];
                int val_2 = p[i-1] + dp[i-1][w-wt[i]];
                dp[i][w] = max(val_1,val_2);
                }
        }
    }

//    return dp[n-1][target];
//     for(int i = 0;i < n;i++)
//    {
//        for(int w = 0;w <= target;w++)
//        {
//            cout << dp[i][w] << " ";
//        }
//        cout << endl;
//    }

}
int main()
{
    memset(dp,-1,sizeof(dp));
    int w;
    cin >> w;
    cout <<"fgdf" <<knapsack(w,0)<<  endl;

}


