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
int BM[100][100]; //Input matrix
int dp[100][100];    //Memoized matrix
int t,n;
int fun(int r,int c)
{

        dp[0][0] = BM[0][0];

    if(r ==0|| c == 0)
    {
        return 0;
    }

    if(dp[r][c] != 0) return dp[r][c];

    if (c == 0)//Caution for negative indexes.
      dp[r][c] = dp[r - 1][c] + BM[r][c];
    else
      dp[r][c] = max(dp[r - 1][c], dp[r - 1][c - 1]) + BM[r][c];
      return dp[r][c];
}


int main()
{
    fast();

    cin >> t ;
    for(int i = 1;i <= t;i++)
    {
        int n;
        cin >> n;

        memset(dp, 0, sizeof(dp));       //Setting 0 to all cell, will update for maximum
        memset(BM, 0, sizeof(BM)); //Setting 0 to all cell, will update for inputs

        //Input for upper triangle
        for (int r = 0; r < n; r++)
            for (int c = 0; c <= r; c++)
                cin >> BM[r][c];

        //Input for lower triangle
        int s = 1;
        for (int r = n; r < (n * 2) - 1; r++)
        {
            for (int c = s; c < n; c++)
                cin >> BM[r][c];
            s++;
        }
        int size1 = (2*n)  - 1;


        cout << fun(size1,n-1) << endl;


        cout << "Case " << i << ": " << dp[2 * n - 2][n - 1] << "\n";
    }



}
