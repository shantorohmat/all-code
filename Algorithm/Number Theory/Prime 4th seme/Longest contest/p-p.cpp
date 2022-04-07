

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
const int Size = 1e7;
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
ll d[ 1000];

int  factor_srtn(ll n)
{
    int res = 0;

    for(ll i = 1;i * i<= n;i++)
    {
        if(n%i == 0)
        {

            res += i;

            if(n/i != i)
            {

                res += n/i;
            }

        }
    }
//     if(n > 1)
//    {
//        cout << n << endl;
//
//    }
    return res;
}
int main()
{

  int s;
  for(int i = 1;;i++){
  cin >> s;
  if(s == 0) return 0;
  int x  = 0;
  for(int i = 1;i <= s;i++)
    if(factor_srtn(i) == s)
         x = i;
         if(x == 0)
            cout<< "Case " << i <<": " << -1 << endl;
         else
           cout<< "Case " << i <<": " << x << endl;


  }
}




