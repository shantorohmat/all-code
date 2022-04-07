
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
#include <queue>
#define ll unsigned long long int
#define ld long long double

using namespace std;

const int INF = 1e7;


int mod = 1e9 + 7;
int fast()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}

int fix_mod(int a, int b)
{
    return (((a & b) + b) % b);
}

int mod_add(int a, int b)
{
    return (a % mod + b % mod) % mod;
}

int add(int a, int b)
{
    if (a < 0) a += mod;
    if (b < 0) b += mod;
    if (a + b >= mod) return a + b - mod;
    return a + b;
}
ll gcd(ll a, ll b)
{
    if (b == 0LL) return a;
    return gcd(b, a % b);
}
int main()
{
    int n,m;
    cin >> n >> m;


    int i = 0 ;
    vector<int>v;
    int sold = 0;

    while(n--)
    {
        int a,b;
        cin >> a >> b;
        int take = min(a,b);
        int will_take = min(2*a,b);
        sold += take;
        v.push_back(will_take - take);


    }
    sort(v.rbegin(),v.rend());
    for(int i = 0 ;i < m;i++)
    {
        sold += v[i];
    }
    cout << sold;

}
