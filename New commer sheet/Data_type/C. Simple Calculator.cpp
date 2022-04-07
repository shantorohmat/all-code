#include <iostream>
#include <vector>
using namespace std;
#define ll long long int

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a,b;

    cin >> a >> b;

    ll  sum = a + b;

    ll mul = a * b;

    ll sub = a - b;


    cout << a << " + " << b << " = " << sum << endl;

    cout << a << " * " << b << " = " << mul << endl;

    cout << a << " - " << b << " = " << sub << endl;

    return 0;


}
