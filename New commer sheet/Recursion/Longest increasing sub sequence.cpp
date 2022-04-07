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
int s[] = {5,0,9,2,7,3,4};
int cnt = 0;
int LIS(int i)
{
    cnt++;
    if(i == 7) return 0;
    int mx = 0;

    for(int j = i+1;j < 7;j++)
    {

        if(s[i] < s[j])
        {
            mx = max(mx,LIS(j));

        }

    }
      return mx +1;
}

int main()
{
    int mx = 0;
   for(int i = 0;i < 7;i++)
   {
       mx = max(mx,LIS(i));
   }
   cout << mx << endl;
   cout << "Count : "<< cnt << endl;
}
