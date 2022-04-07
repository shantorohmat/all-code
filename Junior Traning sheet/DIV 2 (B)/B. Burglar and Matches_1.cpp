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
bool sort_bysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second > b.second);
}
int  match(vector<pair<int,int>>mp)
{

    // cout << endl;
     for(auto it = mp.begin();it != mp.end();it++)
    {
        if(cnt == 1) return val;
       // cout << it->first << " " << it->second << endl;

        if(it->first <= n)
        {
            n = n - it->first;
            val = val + it->first * it->second;
            //cout << val << endl;
        }
        else if(it->first > n)
        {
            val = val + (n * it->second);
            //cout << val << endl;
            cnt = 1;
        }
    }
    return val;
}


int main()
{
     cin >> n >> m;
    vector <pair < int,int>>mp;

    for(int i = 1;i <= m;i++)
    {
        int a,b;
        cin >> a >> b;

        mp.push_back({a,b});
    }

    sort(mp.begin(),mp.end(),sort_bysec);

   cout << match(mp) << endl;

}
