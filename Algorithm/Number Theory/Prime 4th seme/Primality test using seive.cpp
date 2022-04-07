///  you have 1e3 test case and you have given a long integer such as 1e14 . Now you have to determined it's
///  prime or not.
///  if we want to find out 1e14 is prime or not . We have to find out 1 to 1e14/2 = 1e7. 1e6's prime number
///  if 1e14 is divided by 1 to 1e7's prime number.
///  1 to n numbers .It has {(n)/ln(n)}  numbers of  prime
///  1 to 1e6 numbers .it has (1e7)/ln(1e7) numbers of  prime
/// time complixty = O ( n log log n)
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
ll arr[Size];
vector <ll> v;
void fun()
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
       if(arr[i] ) v.push_back(i);
   }
}

bool primality_test(ll n,vector<ll>v)
{
   if(n < 2) return false;
   if(n % 2 == 0) return (n == 2);



    for(ll i = 1;i * i< Size;i++)
    {


        if(n%v[i] == 0)
        {

            return false ;
        }
    }
    return true;


}
int main()
{

   fast();

   fun();
   int i  = 0;
//  cout << "Prim Number's : " << endl;
//   for(auto it = v.begin();it != v.end();it++)
//   {
//      cout << *it << " ";
//      i++;
//   }
//   cout << endl << "Total Number of Prime Number : "<< i << endl;

   cout << "Primality  test : " << endl;

   ll n;
   cin >> n;
   cout << boolalpha << primality_test(n,v) << endl;




}
/*14 digit prime number

100123456789
100529784361
101103163367
101107157131
101111111111
101234567897
101601701401
101740496633
10985674123
*///



