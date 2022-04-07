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
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];

    }
    int mxx = 0;
    for(int i = 0;i < n;i++)
    {
        int mx  = 1;
        int k = i;
        for(int j = i+1;j < n;j++)
        {
            if(a[j] <= a[k])
            {
                mx++;
            }
            else break;
            k++;
        }
        k = i;

        for(int j = i-1;j >= 0;j--)
        {
            if(a[j] <= a[k])
            {
                mx++;
            }
            else break;
            k--;
        }
        if(mxx < mx )
        {
            mxx = mx;
        }
    }
    cout << mxx << endl;

}
