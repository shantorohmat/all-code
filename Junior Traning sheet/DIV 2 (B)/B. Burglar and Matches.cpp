#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>
#include <map>
#include <stack>
#include <set>
#include <queue>
#define ll unsigned long long int
#define ld long long double
using namespace std;

const int Size = 1e5;

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
int n,m,val = 0,cnt = 0;
void printPair(pair<int, int> p)
{
    if(cnt == 1) return;



    cout << "("<< p.first << ", "<< p.second << ") ";
         if(p.first <= n )
         {
             n -= p.first;
             val = val + p.first * p.second;
            // cout << p.first  << " " << val<< endl;
            // if(n == 0)cnt = 1;
         }
         else if(p.first > n )
         {

             val = val + (p.second * n);
            // cout << n  << " oio " << val<< endl;
             n  = 0;
             if(n == 0)cnt = 1;
             return;
         }



}
void Showstack(stack<pair<int, int> > st)
{

    while (!st.empty()) {

        printPair(st.top());

        st.pop();

    }



   // cout << '\n';
}
int main()
{

    cin >> n >> m;
    set <pair < int,int>>mp;
    for(int i = 1;i <= m;i++)
    {
        int a,b;
        cin >> a >> b;

        mp.insert({b,a});
    }
    stack<pair<int,int>>st;
   for(auto it = mp.begin();it != mp.end();it++)
   {
      // cout << it->second << " " << it->first << endl;
       st.push({it->second,it->first});
   }
   Showstack(st);
   cout << val << endl;






}
/*
4 3
1 4
6 4
1 7
*/
