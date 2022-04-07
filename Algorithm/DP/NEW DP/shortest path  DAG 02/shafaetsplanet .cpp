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

const int INF = INT_MAX;
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
vector <pair<int,int>>ver[1200];
//int ver[100][100];
int dp[1000];//step 1
int node,edge;
int shortest_path(int u)
{
    //base case
    if(u == node-1)
        return 0;

     //step 3
    if(dp[u] != -1)
        return dp[u];

    //recursive case : step 3
    int ans = INF;
    for(int v = 0;v < node;v++)
    {
        if(ver[u][v].second != INF)
        {
            ans = min(ans,shortest_path(v)+ ver[u][v].second);
        }
    }
    //step 4
    dp[u] = ans;
    cout << ans << endl;
    return dp[u];

}
int main()
{
        memset(dp,-1,sizeof(dp));// step 2

        cin >> node >> edge;
        for(int i = 0;i < edge;i++)
        {
            int a,b,c;
            cin >> a >> b >> c;
//            ver[a][b] = c;
            ver[a].push_back({b,c});
        }

       cout << shortest_path(node) << endl;


    for(int i = 0;i < node;i++)
    {

        for(int j = 0;j < ver[i].size();j++)
        {
            cout << i  << "-->";
            cout << ver[i][j].first << " = " << ver[i][j].second << endl;
        }
        cout << endl;
    }

}
/*
6 5
0 3 1
0 1 2
1 4 9
1 2 1
2 4 3
*/
