
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
#define INF 999999
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
bool fun(int n)
{
    if(n < 2) return false;
    if(n % 2 == 0) return false;
    if(n == 2) return true;

    for(int i = 3;i * i <= n;i = i+2)
    {
        if(n%i == 0) return false ;
    }
    return true;

}
int main()
{

    cout << "Input a integer for determined prime number or not : " ;

   while(1)
    {
        int n;
        cin >> n;
        cout << boolalpha << fun(n)  << endl;
    }

}

