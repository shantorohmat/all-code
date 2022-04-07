#include <iostream>
#define ll long long int
using namespace std;
ll biExpo(ll base,ll n,int p)
{
    ll result = 1;

    while(n)
    {
        if(n%2)
        {
            result = (result * base)%p;
            n--;
        }
        else
        {
            n /= 2;
            base = (base*base)%p;
        }
    }

    return result;
}

int main()
{
    ll n,a,p;

    cin >> a >> n >> p;

    cout << a << "^" << n << "%" << p << " = " << biExpo(a,n,p) << endl;
}


