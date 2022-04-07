

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


ll factor_srtn(ll n)
{
    set<ll>s;

     ll res = 0;

    for(ll i = 1;i * i<= n;i++)
    {
        if(n%i == 0)
        {

            s.insert(i);

            if(n/i != i)
            {

                s.insert(n/i);
            }

        }
    }

    return s.size();

}
int main()
{
    int t;
    cin >> t;
    while(t--){

        int u,l;

        cin >> l >> u;

        ll res = 0,k = 0;

        for(int i = l;i <= u;i++)
        {
            if(res < factor_srtn(i))
            {
                res = factor_srtn(i);
                k = i;
            }
        }

        cout << "Between " << l << " and " << u << ", " << k << " has a maximum of " << res << " divisors." << endl;
    }


}

///1


