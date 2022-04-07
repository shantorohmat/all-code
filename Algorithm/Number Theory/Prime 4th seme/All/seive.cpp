///Time complexity O(n * ln(ln n)) or O(n * log (log n))
///1 to n numbers .It has {(n)/ln(n)}  numbers of  prime
/// 1 to 1e6 numbers .it has (1e7)/ln(1e7) numbers of  prime
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
const int Size = 1e4;
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
int arr[Size];
vector <int> v;
void fun()
{
   for(int i = 0;i < Size;i++)
   {
       arr[i] = 1;
   }

   arr[0] = arr[1] = 0;

   for(int i = 2;i*i <= Size;i++)/// loop will run n * lnln(n)
   {                             /// loop will run 1e4 * lnln(1e4)
       if(arr[i]){               /// loop will run 1e4 * 3 = 3 * 1e4
       for(int j = i * i;j <= Size;j += i)
       {
           arr[j] = 0;
       }

       }
   }

   for(int i = 0;i < Size;i++)
   {
       if(arr[i] ) v.push_back(i);
   }
}
int main()
{

   fast();

   fun();
   int i  = 0;

  cout << "Prim Number's : " << endl;
   for(auto it = v.begin();it != v.end();it++)
   {
      cout << *it<<"(" << i <<")"<< " ";
      i++;
   }
   cout << endl << "Total Number of Prime Number : "<< i << endl;

}


