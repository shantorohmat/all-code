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
int a[100000] = {0};

int fun(int i,int n)
{
    int mx = 0;
    for(int j = i;j <= n;j++)
    {
        mx = max(mx,a[j]);
    }
    return mx;

}
int main()
{
    int n;
    cin >> n;

    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    for(int i = 0;i < n;i++)
    {

        a[i] =   fun(0,i);
    }
    for(int i = 0;i < n;i++)
    {
        cout <<  a[i] << " ";
    }





}
