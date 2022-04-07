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
string s1,s2;
int n,m;
int dp[120][120];
int dr[120][120];

int LCS(int i,int j)
{
    int ans;

    if(i == n || j == m) return 0;

    if(dp[i][j] != -1)
    return dp[i][j];


    if(s1[i] == s2[j])
    {
         ans = 1 + LCS(i+1,j+1);
         dr[i][j] = 1;
    }

    else if(s1[i] != s2[j])
    {
        int a = LCS(i+1,j);
        int b = LCS(i,j+1);
        if( a > b )
        {
            ans = a;
            dr[i][j] = 2;
        }
        else
        {
            ans  = b;
            dr[i][j] = 3;
        }
    }


    dp[i][j] = ans;
    return dp[i][j];

}
void path(int i,int j)
{
    if(i == n || j == m) return ;

            if(dr[i][j] == 1)
            {
                cout << s2[j] << " ";
                path(i+1,j+1);

            }
            else
            {

                if(dr[i][j] == 2)
                {
                    path(i+1,j);

                }
                else if(dr[i][j] = 3)
                {
                    path(i,j+1);

                }
            }


}
int main()
{
    memset(dp,-1,sizeof(dp));
    memset(dr,-1,sizeof(dr));



        cin >> s1 >> s2;
        n = s1.size();
        m = s2.size();
        cout << LCS(0,0) << endl;
        path(0,0);




}
