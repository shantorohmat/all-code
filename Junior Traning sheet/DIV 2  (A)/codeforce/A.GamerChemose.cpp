#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,h;
        cin >> n >> h ;
        ll a[100000];
        for(int i = 0;i < n;i++)
        {
            cin >> a[i];
        }
        sort(a,a+n,greater<int>());
        int x = a[0];
        int y = a[1];
        int ans = 0;
        if(h%(x+y) == 0)
        {
             ans = 2 * (h/(x+y));
        }
        else if(h%(x+y) <= x)
        {
            ans = 2 * (h / (x+y)) + 1;
        }
        else 
        ans = 2 * (h / (x+y)) + 2;

        cout << ans << endl;
    }
}