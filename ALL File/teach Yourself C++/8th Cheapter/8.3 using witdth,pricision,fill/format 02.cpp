#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x;

    cout << "      x      sqrt(x)      x^2 " << endl;

    for(x = 2.0;x <= 20.0;x++)
    {
        cout.width(7);
        cout << x << "     ";
        cout.width(7);
        cout << sqrt(x) << "    ";
        cout.width(7);
        cout <<  x*x << endl;
    }
    return 0;
}
