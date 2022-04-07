#include <iostream>
using namespace std;
#define ll long long int
ll c = 0 ;
ll log(ll n)
{
    if(n==1) return c;
    c++;
    n = n / 2;
    log(n);
}
int main()
{
    ll n;
    cin >> n;
    cout << log(n) << endl;
}
