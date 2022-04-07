#include <iostream>
using namespace std;
#define ll unsigned long long int
#define p 1000000007
ll sum = 1;

ll fact(ll n)
{
    if(n < 2) return 1;

    return fact(n-1) * n;
}
int main()
{
    ll n;
    cin >> n;
    ll r;
    cin >> r;
    ll t1,t2,t3;
    t1 = fact(n);
    t2 = fact(n-r);
    t3 = fact(r);

    ll k = t1/t2;
    k = k * (1/t3);
    cout << k << endl;

}
