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

const int INF = INT_MAX;
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
int dp[1200];
int n;
int LIS(int i,int s[])
{
    if(dp[i] != -1) return dp[i];
    int mx = 0;

    for(int j = i+1;j < n;j++)
    {
        if(s[i] < s[j])
        mx =   max(LIS(j,s),mx);
    }

    dp[i] = 1 + mx;
    return dp[i];

}
int main()
{
    memset(dp,-1,sizeof(dp));
    int t;
    cin >> t;
    while(t--)
    {

        cin >> n;
        int *s = new int[n];
        for(int i = 0;i < n;i++) cin >> s[i];

        int mx = 0;
        for(int i = 0;i < n;i++)
        {
            mx = max(mx,LIS(i,s));
        }
        cout << mx << endl;


    }
}

//2
//7
//5 0 9 2 7 3 4

