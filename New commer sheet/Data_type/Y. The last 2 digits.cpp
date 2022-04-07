#include <iostream>
using namespace std;
#define ll long long int
int main()
{
    ll a,b,c,d;

    cin >> a >> b >> c >> d;

    ll cur = a ;

    cur = a % 100;

    cur = cur * b;

    cur = cur % 100;

    cur = cur * c;

    cur = cur % 100;

    cur = cur * d;

    cur = cur % 100;

    if(cur < 10)
        cout << "0" << cur << endl;
    else cout << cur << endl;



}
