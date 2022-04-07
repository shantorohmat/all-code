///  you have 1e3 test case and you have given a long integer such as 1e14 . Now you have to determined it's
///  prime or not.
///  if we want to find out 1e14 is prime or not . We have to find out 1 to 1e14/2 = 1e7. 1e6's prime number
///  if 1e14 is divided by 1 to 1e7's prime number.
///  1 to n numbers .It has {(n)/ln(n)}  numbers of  prime
///  1 to 1e6 numbers .it has (1e7)/ln(1e7) numbers of  prime
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

void Prime_factor_n(ll n)
{
    cout << "O(n) time : " << endl;

    for(ll i = 2;i <= n;i++)
    {
        if(n%i == 0)
        {
            ll c = 0;

            while(n%i == 0)
            {
                c++;
                n /= i;
            }
            cout << i << " " << c << " ";
        }
    }
      if(n > 1)
    {
        cout << n <<  endl;
    }
}
void Prime_factor_srtn(ll n)
{
    cout << "Srt Time : " << endl;
    for(ll i = 2;i * i<= n;i++)
    {
        if(n%i == 0)
        {
            int c = 0;

            while(n%i == 0)
            {
                c++;
                n /= i;
            }
            cout << i << " " << c << " ";
        }
    }
     if(n > 1)
    {
        cout << n << endl;
    }
}
int main()
{

    Prime_factor_srtn(1e9+7);
    Prime_factor_n(1e9+7);
}



