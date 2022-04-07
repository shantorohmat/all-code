#include <iostream>
using namespace std;
#define ll long long int
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a,b,c,d;

    cin >> a >> b >>c >> d;

    ll s = (a*b) - (c*d);

    cout << "Difference"<< " = " << s << endl;

    return 0;
}
