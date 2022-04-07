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
    int wt[] = {0,3,2,5,4};
    int p[] =  {0,4,3,6,5};
    int n = 5;
    int cnt = 0;
int knapsack(int w,int i)
{
    cnt++;
    int ans = 0;

    if(i == n || w == n) return 0;

    if(wt[i] > w)
        knapsack(w,i+1);
    else{
        int val_1 = knapsack(w,i+1);
        int val_2 = p[i] + knapsack(w-wt[i],i+1);
        ans = max(val_1,val_2);
    }
    return ans;
}
int main()
{
    int w;
    cin >> w;
    cout << knapsack(w,0)<< endl <<cnt << endl;

}
