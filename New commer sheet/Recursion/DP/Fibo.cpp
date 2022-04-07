#include <iostream>
#define ll long long int
using namespace std;
ll c = 0;
ll dp[1000];
ll fib(ll n)
{
    c++;
    if(n <= 2) return 1;

    if(dp[n] != 0)
        return dp[n];

    ll a = fib(n-1);
    ll b = fib(n-2);
    dp[n] = a+b;
    return dp[n];
}
int main()
{
    ll n;
    cin >> n;
    cout << fib(n) << " ";
    cout << endl << c << endl;
}
