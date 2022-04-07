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
string s1,s2;
int n,m;
int dp[1200][120];
void DP()
{
    for(int i = 0;i < n;i++ ) dp[n][i]  = 0;
    for(int i = 0;i < m;i++ ) dp[i][m]  = 0;
}
int LCS()
{
    DP();

    for(int i = n-1;i >= 0;i--)
    {
        for(int j = n-1;j >= 0;j--)
        {
            if(s1[i] == s2[j])
            {
                dp[i][j] = 1 + dp[i+1][j+1];
            }
            if(s1[i] != s2[j])
            {
                dp[i][j] = max(dp[i+1][j],dp[i][j+1]);

            }
        }
    }
    return dp[0][0];
}
int main()
{
    memset(dp,-1,sizeof(dp));
    int t;
    cin >> t;
    while(t--)
    {
        cin >> s1 >> s2;
        n = s1.size();
        m = s2.size();
        cout << LCS() << endl;


    }
}
