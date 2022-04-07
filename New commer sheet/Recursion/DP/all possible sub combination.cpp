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
    char s[] = "BC";
    char K[4];
    K[3] = '\0';

    for(int i = 0;i < 2;i++)
    {
        for(int j = 0;j < 2;j++)
        {
            for(int k = 0;k < 2;k++)
            {
                K[0] = s[i];
                K[1] = s[j];
                K[2] = s[k];
                cout << K<< "\n";
            }
        }
    }
    return 0;
}
