#include <iostream>
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
string s = ".#..##";
int n = s.size();
   int dp[100];
   int dr[100];


int fun(int i)
{
    if(i >= n)
        return 0;

    if(dp[i] != -1)
    return dp[i];

    int a = 0,b = 0;///int a = 1e8,b = 1e8;
     if(i+2 <= n && s[i+2] != '#')
     a = 1 + fun(i+2);


     if(i+3 <= n && s[i+3] != '#')
     b = 1 + fun(i+3);

    if(a > b) {
    dp[i] = a;
    dr[i] = 1;
    }
    else {
    dp[i] = b;
    dr[i] = 2;
    }
    return dp[i];
}

void g(int i)
{

    cout << i << endl;
    if(i >= n)
        return;


     if(i+2 <= n && dr[i] == 1)
     g(i+2);

     if(i+3 <= n && dr[i] == 2)
     g(i+3);


}
int main()
{
    memset(dp,-1,sizeof(dp));
    memset(dr,-1,sizeof(dr));
    cout << fun(0) << endl;
    g(0);

}
