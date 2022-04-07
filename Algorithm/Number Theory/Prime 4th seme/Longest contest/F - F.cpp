

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
const int Size = 1000007;
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
ll arr[Size];
vector <ll> v;

void sieve()
{
   for(int i = 0;i < Size;i++)
   {
       arr[i] = 1;
   }

   arr[0] = arr[1] = 0;

   for(ll i = 2;i*i <= Size;i++)
   {
       if(arr[i]){
       for(ll j = i * i;j <= Size;j += i)
       {
           arr[j] = 0;
       }

       }
   }

   for(int i = 0;i < Size;i++)
   {
       if(arr[i] )
       {
           v.push_back(i);

       }
   }
}

bool fun(int n)
{

    if(n < 2) return false;
    if(n % 2 == 0) return n == 2;


    for(int i = 3;i * i <= n;i = i+2)
    {
        if(n%i == 0) return false ;
    }
    return true;

}

int main()
{

   fast();

   sieve();

   ll n;

   while(1){

        cin >> n;

    ll m = v.size();

    if(n == 0) return 0;

    ll a,b;

   bool k = false;

   for(int i = 1;i < m;i++)
   {
       if( v[i] > n )
            break;

        a = v[i];
        b = n - a;

       if(fun(b))
       {
           cout << n << " = " << a << " + " << b << endl;
           k = true;
           break;
       }
   }

   if(!k) cout << "Goldbach's conjecture is wrong." << endl;

   }
}


