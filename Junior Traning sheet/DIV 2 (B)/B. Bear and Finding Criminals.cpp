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

const int Size = 1e5;

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
int main()
{
    int n,m;
    cin >> n >> m;
    int *a = new int[n+1];
    for(int i = 1;i <= n;i++)
    {
        cin >> a[i];
    }
    int c = 0;
    if(a[m] == 1) c = 1;

    for(int i = 1;i <= n;i++)
    {
        if(a[m+i] == 1 && a[m-i] == 1)
            c+=2;
        else if(a[m+i] == 1 && m-i <= 0)
            c+=1;
        else if(a[m-i] == 1 && m+i > n)
            c+=1;

    }
    cout << c << endl;
}
