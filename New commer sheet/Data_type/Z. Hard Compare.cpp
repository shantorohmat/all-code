#include <iostream>
#include <cmath>
using namespace std;
#define ll long long int
int main()
{
    ll a,b,c,d;

    cin >> a >> b >> c >>  d ;

   double f = b * log(a);
    double s = d * log(c);

    if(f > s) cout << "YES"<< endl;
    else cout << "NO" << endl;

}
