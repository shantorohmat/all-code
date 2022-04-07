#include <iostream>
#include <bitset>
using namespace std;
#define ll long long int

int main()
{
    ll a,b,q;

    cin >> a >> b >> q;

    if(q == 1)
        cout << a << endl;
    else if(q == 2)
        cout << b << endl;
    else if(q > 2)
    {
        cout << (a ^ b);
    }

}
