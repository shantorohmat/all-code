#include <iostream>
#include <math.h>
#define ll long long int
ll is_prime(ll n);
using namespace std;
int main()
{
   ll k;

   cin >> k;

   while(k--){

    ll n;

    cin >> n;

    if(n == 0) { break; }

    if(0 == is_prime(n)){ cout << "NO" << endl ; }

    if(1 == is_prime(n)){cout << "YES" << endl; }

    }

    return 0;

}
ll is_prime(ll n)
{
    if(n < 2) { return 0; }

    if(n == 2) { return 1; }

    if(n % 2 == 0) { return 0; }

    ll root = sqrt(n);

    for(int i = 3;i <= sqrt(n);i = i+2)
    {
        if(n % i == 0) { return 0; }
    }
    return 1;
}
