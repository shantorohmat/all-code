#include <iostream>
#include <cstring>
using namespace std;
    int n,k,t,a[100000];
    int c = 0;
    int dp[1000010];
    int mod = 1e9+7;
#define ll long long int
void fast()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int mod_add(int a,int b)
{
    return (a%mod + b%mod) % mod;
}
int fun(int n)
{
    c++;
    if(n>=k)
    {
        return n == k;
    }
    if(dp[n] != -1)
        return dp[n];

    int b  = 0;
    for(int i = 0;i < t;i++)
     b = mod_add(b , fun(n+a[i]));
     dp[n] = b;
     return dp[n];

}
int main()
{
    fast();
    memset(dp,-1,sizeof(dp));
    cin >> n >> k;


    cin >> t;
    for(int i = 0;i < t;i++ )
    {
        cin >> a[i];
    }
    cout << fun(n) << endl;
    cout << c << endl;
}
