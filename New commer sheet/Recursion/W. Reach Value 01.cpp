#include <iostream>
using namespace std;
#define ll long long int
 ll n;
 int c = 0;
#include <map>
map<int,bool> dp;
ll fun(ll sum)
{
    c++;
    if(sum >= n)
    {
        return sum == n;

    }
    if(dp[sum] != 0) return dp[sum];
    bool a,b;
     a =a | fun( sum*10);
     a =a | fun( sum*20);
     dp[sum] = a;
    return a;
}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {

        cin >> n;

        if(fun(1)) cout << "YES" << endl;
        else cout << "NO" << endl;
        dp.clear();
//        cout << c << endl;
    }
}

