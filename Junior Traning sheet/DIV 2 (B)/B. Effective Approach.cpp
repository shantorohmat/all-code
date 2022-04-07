#include <iostream>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin >> n;
    ll*a = new ll[n+7];
    ll*d = new ll[n+7];

    for(ll i = 1;i <= n;i++)
    {
        ll x;
        cin >> x;
        a[x] = i;
        d[x] = n - i + 1;
    }

    ll m;
    cin >> m;
    ll sum = 0,sum_1 = 0;


    for(ll i = 1;i <= m;i++)
    {
        ll x;
        cin >> x;
        sum += a[x];
        sum_1 += d[x];

    }
    cout << sum << " " << sum_1 << endl;




}
