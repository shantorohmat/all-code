

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
const int Size =  100000;
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
vector <ll> v;;
int k = 1;
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
           k++;
           v.push_back(i);

       }
   }
}



int main()
{
    map<ll,ll> mp;
    fast();
    sieve();
    ll n;
    while(1){
    cin >> n;
    for(ll i = n;i < k-1; i++)
    {



        ll a = v[i];
        ll b = v[i+1];


        ll d = v[i+2];




        if(abs(a-b) == 2  &&d!=a && d != b)
        {
            cout  << "("<< a << " " << b  << ")"<< endl;
            break;
        }

          }
    }



}



