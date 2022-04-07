#include <iostream>
#include <string.h>
#define ll long long int
using namespace std;
ll cnt = 0;
ll dp[1200000];
ll fib(ll n)
{
    cnt ++;
    if(n <= 2) return 1;
    if(dp[n] != -1) return dp[n];
    dp[n] = fib(n-1) + fib(n-2);
    return dp[n];
}
int main()
{
    memset(dp,-1,sizeof(dp));
    ll n;
    cin >> n;
    cout << fib(n) << endl << cnt << endl;
}
