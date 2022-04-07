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

int coin(int i,int w,int c[])
{

    if(w == 0) return 1;
    if(i == n) return 0;

    if(dp[i][w] != -1)
        return dp[i][w];

    int ans_1 = coin(i+1,w - c[i],c);
    int ans_2 = coin(i+1,w,c);

    dp[i][w] = (ans_1+ans_2);
    return dp[i][w] ;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    cout << "Input coin number : " ;
    cin >> n;
    int *c = new int[n];

    cout << "input coin : " ;
    for(int i = 0;i < n;i++)
    {
        cin >> c[i];
    }
    cout << "Input target amount money : " ;
    int w;
    cin >> w;
    cout << coin(0,w,c);

}

