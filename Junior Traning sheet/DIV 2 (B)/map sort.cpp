

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
bool cmp(pair<int,int>&a,pair<int,int>&b)
{
    return a.second > b.second;
}
void sort(map<int,int>&mp)
{
    vector<pair <int,int>> v,v1;
    for(auto &x : mp){

       v.push_back(x);
    }
    sort(v.begin(),v.end(),cmp);
    for(auto &x : v)
        cout << x.first<< " " << x.second << endl;

}
int main()
{
    multimap<int,int,greater<int>>mp;
    int n,m;
    cin >> n >> m;
    for(int i = 0;i < n;i++)
    {
        int x,y;
        cin >> x >> y;
        mp.insert({x,y});
    }
    cout << endl;
    for(auto x: mp)
        cout << x.first << " "  << x.second << endl;

}
