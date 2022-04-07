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
int n;
int dp[1200];
int dr[1200];

int LIS(int i,int s[])
{
    if(dp[i] != -1) return dp[i];
    int ans = 0;

    for(int j = i+1;j < n;j++)
    {

        if(s[i] < s[j])
        {
            int mx = LIS(j,s);
            if(mx > ans)
            {
                ans = mx;
                dr[i] = j;
            }
        }
    }

    dp[i] = ans + 1;
    return dp[i];

}
void path(int i,int s[])
{

    int ans = 0;
    if(n == i) return ;

    for(int j = i+1;j < n;j++)
    {

        if(s[i] < s[j])
        {
            if(dr[i] == j )
            {
                cout << s[j] << " ";
                path(j,s);
            }
        }
    }


}
int main()
{
    memset(dp,-1,sizeof(dp));
    memset(dr,-1,sizeof(dr));
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int *a = new int[n];
        for(int i = 0;i < n;i++)
        {
            cin >> a[i];
        }
        int mx = 0,k;
        for(int i = 0;i < n;i++)
        {
            int ans = LIS(i,a);
            if(ans > mx)
            {
                mx = ans;
                k = i;
            }
        }
        cout << mx << endl;

        cout << a[k] << " ";
        path(k,a);


    }
}
//2
//7
//5 0 9 2 7 3 4
