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
    double wt[] = {10,20,30};
    double p[]  = {60,100,120};
    double r[]  = {0,0,0,0,0};
    double n = 3;
void ratio()
{
    for(int i = 0; i  < n;i++)
    {
         r[i] = p[i]/wt[i];

    }



    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++){
        if(r[i] > r[j])
        {
            swap(r[i],r[j]);
            swap(p[i],p[j]);
            swap(wt[i],wt[j]);

        }
        }
    }
}
int knapsack(int w)
{
    double cur = 0;
    double profit = 0;
    for(int i = 0;i < n;i++)
    {
        if( cur + wt[i] <= w)
        {
            cur = cur + wt[i];
            profit = profit + p[i];
        }
        else
        {
            int remain = w - cur;
            profit  += (remain/wt[i]) * p[i] ;
            //profit = profit + k;

            break;
        }
    }
    return profit;

}
int main()
{

    int w;
    cin >> w;
    ratio();
    cout << knapsack(w);





}

/*
for(int i = 0;i < n;i++)
    {
        cout << r[i] << " ";
    }
    cout << endl;
    for(int i = 0;i < n;i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
     for(int i = 0;i < n;i++)
    {
        cout << wt[i] << " ";
    }
*/
