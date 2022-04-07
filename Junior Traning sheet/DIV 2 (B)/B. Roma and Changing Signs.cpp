#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long int
int main()
{
    ll n,k;
    cin >> n >> k;
    ll *arr = new ll[n+7];
    ll sum = 0;
    ll val = INT_MAX;


    for(ll i = 0;i < n;i++)
    {
        ll a;
        cin >> a;
        if(a < 0 && k > 0)
        {
            a = a* -1;
            k--;
        }
        sum += a;

        val = min(val,a);

    }
    if(k%2 == 1)
        sum -= 2*val;
    cout << sum << endl;



}
