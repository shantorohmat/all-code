
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
const int Size = 1e6;
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
vector<bool>v(Size,true);
int arr[Size];
int k = 1;
void fun()
{
   v[0] = v[1] = false;

   for(int i = 2;i*i <Size;i++)
   {
       if(v[i])
       {
           for(int j = i*i;j < Size;j+=i)
           {
               v[j] = false;
           }
       }
   }


   for(int i = 0;i < Size;i++)
   {
       if(v[i])
       {
           arr[k] = i;
           k++;
       }
   }
}


int main()
{
    fast();
    fun();

    for(int i = 1;i < 1000;i++)
        cout << arr[i] << " ";

}



