#include <iostream>
using namespace std;
#define ll long long int
ll gcd(ll a,ll b)
{
    if(b == 0) return a;
    else gcd(b,a%b);

}
ll sum(ll a)
{
    ll S = 0;
    while(a)
    {
        S += a%10;
        a = a/10;
    }
    return S;
}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a;
        cin >>a;
        while(1)
        {
            int S = sum(a);
            if(gcd(a,S) > 1)
            {
                break;
            }
            a++;
        }

        cout << a << endl;
    }
}
