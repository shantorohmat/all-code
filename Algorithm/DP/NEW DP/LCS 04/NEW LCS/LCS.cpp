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
int dp[1200][1200];
int cnt = 0;
int LCS(int i,int j)
{

    if(i == n || j == m) return 0;

    if(dp[i][j] != -1)
    return dp[i][j];

    int ans = 0 ;
    if(s1[i] == s2[j])
        ans = 1 + LCS(i+1,j+1);

    else
        ans = max(LCS(i+1,j),LCS(i,j+1));

    dp[i][j] = ans;
    return dp[i][j];

}
int main()
{
    memset(dp,-1,sizeof(dp));


        cin >> s1 >> s2;
        n = s1.size();
        m = s2.size();
       cout <<  LCS(0,0);
       cout << endl << cnt << endl;

}
