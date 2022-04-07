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
    string s1 = "hello";
    string s2 = "dsfhelled";
    int n = s1.size();
    int m = s2.size();
    int cnt = 0;


int f(int i,int j)
{
    int res ;
    cnt++;
    if(i == n || j == m)
        return 0;
    if(s1[i] == s2[j])
     res = 1 + f(i+1,j+1);
    else {
        res = max(f(i+1,j),f(i,j+1));
    }
    return res;

}

int main()
{

    cout << f(0,0) << endl;
    cout << cnt << endl;

}
