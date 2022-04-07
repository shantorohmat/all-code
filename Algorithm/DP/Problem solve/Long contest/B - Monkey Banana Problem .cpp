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


int main()
{
    int t,n;
    cin >>  n;
     int size1 = (2*n) - 1;
    vector <int>v[1000];
    int i;
    for( i = 1;i <= n;i++)
    {
        for(int j = 0;j < i;j++)
        {

        int a;
        cin >> a;
        v[i].push_back(a);

        }
    }

    for(int k = 1;k < n;k++,i++ )
    {
        for(int j = 0;j < n-k;j++)
        {
            int a;
            cin >> a;
            v[i].push_back(a);
        }
    }
    cout << "Hello" << endl;
    for( i = 1;i <= ((2*n)-1);i++)
    {
        for( auto it = v[i].begin();it != v[i].end();it++)
       {
          cout << *it << " ";
       }
       cout << endl;
    }




}
