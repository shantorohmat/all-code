#include <iostream>
#include <iostream>
#include <math.h>
using namespace std;
#define ll long long int

ll prime(ll n)
{
    if(n < 2) return 0;

    if(n == 2) return 1;

    if(n % 2 == 0) return 0;

    if(n > 2){

    for(int i = 3;i <= sqrt(n);i = i+2)
    {
        if(n % i == 0) {
         return 0;
        }
    }
    return 1;
    }

}
int main()
{
    ll n;

    cin >> n;

    int x = prime(n);

    if(x == 1) cout << "YES" << endl;
    else if(x ==  0) cout << "NO" << endl;
}
