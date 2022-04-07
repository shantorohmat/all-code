#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout << fixed << setprecision(9);

    double s;

    cin >> s;

    double a = pow(s,2) * 3.141592653;

    cout << a << endl;



}
