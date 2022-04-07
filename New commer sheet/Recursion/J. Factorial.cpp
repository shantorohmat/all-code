#include <iostream>
using namespace std;
#define ll long long int
ll fact(ll n)
{
    ll k = 1;
    if(n > 0)
    {
         k = n * fact(n-1);
    }
    return k;
}
int main()
{
    int n;
    cin >> n;
    ll k = fact(n);
    cout << k << endl;
}
