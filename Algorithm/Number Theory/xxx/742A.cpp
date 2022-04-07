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
    ll n;

    cin>> n ;

    cout << biExpo(8,n,10) << endl;
}
