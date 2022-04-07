#include <iostream>
#define ll long long int
using namespace std;
ll biExpo(ll base,ll n)
{
    ll result = 1;

    while(n)
    {
        if(n%2)
        {
            result = result * base;
            n--;
        }
        else
        {
            n /= 2;
            base *= base;
        }
    }

    return result;
}

int main()
{
    ll n,a;

    cin >> a >> n;

    cout << a << "^" << n << " = " << biExpo(a,n) << endl;
}

