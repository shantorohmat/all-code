#include <iostream>
#include <iomanip>
using namespace std;
#define ll long long int
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a;
    ll b;
    char c;
    float d;
    double e;

    cin >> a >> b >> c >> d >> e;

    cout << a << endl ;
    cout << b << endl ;
    cout << c << endl ;
    setprecision(2);
    cout <<  d << endl ;
    setprecision(2);
    cout << e << endl;

    return 0;
}
