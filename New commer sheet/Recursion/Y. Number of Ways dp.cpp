#include <iostream>
#include <cstring>
using namespace std;
#define ll long long int
    int n,k;
    ll dp[2000000];
ll fun(int n)
{
    if(n>=k)
    {
        if(n ==k)
        return 1;
        else return 0;
    }
    if(dp[n] != -1)
        return dp[n];
    ll a  = 0;
     a = a + fun(n+1);
     a = a + fun(n+2);
     a = a +  fun(n+3);
    dp[n] = a;
     return a;

}
int main()
{
    memset(dp,-1,sizeof(dp));
    cin >> n >> k;
    cout << fun(n) << endl;
}

