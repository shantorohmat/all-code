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

int dp[120][120];
int n = 4;
int m = 4;
int c[4][4];


int grid(int i,int j) {

        if(n-1 == i && m - 1 == j ) return 1;
        if(i >= n || j >= m || i < 0  || j < 0) return 0;

        int ans = grid(i+1,j+1) + grid(i+1,j) + grid(i,j+1);
        return ans;



}
int main()
{
    memset(dp,-1,sizeof(dp));

    for(int i = 0;i < 4;i++)
    {
        for(int j = 0;j < 4;j++)
        {
             c[i][j] = 1;;
        }
    }
    cout << grid(0,0) ;
}





