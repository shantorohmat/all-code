#include <iostream>
using namespace std;
#define ll long long int

ll fact(ll n)
{
    if(n > 1)
        return (n)*fact(n-1);
        else return 1;
}
int main()
{
    ll n,r;

    cin >> n >> r;

    ll c = fact(n)/(fact(n-r)*fact(r));

    cout << c  << " ";

    ll p = fact(n)/fact(n-r);

    cout << p << endl;
}
