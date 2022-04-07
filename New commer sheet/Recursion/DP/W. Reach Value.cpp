#include <iostream>
using namespace std;
#define ll long long int
 ll n;
 int c = 0;
ll fun(ll sum)
{
    c++;
    if(sum >= n)
    {
        return sum == n;

    }

    ll a = fun( sum*10);
    ll b = fun( sum*20);
    return a || b;
}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {

        cin >> n;

        if(fun(1)) cout << "YES" << endl;
        else cout << "NO" << endl;cout << c << endl;
    }
}
