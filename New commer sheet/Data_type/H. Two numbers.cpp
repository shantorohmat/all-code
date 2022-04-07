#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b;

    cin >> a >> b;

    double c = ceil(a/b);

    double d = floor(a/b);

    double x = round(a/b);

    cout << "floor " << a <<" / "<< b << " = " <<d << endl;

    cout << "ceil " << a <<" / "<< b << " = " <<c << endl;

    cout << "round " << a <<" / "<< b << " = " <<x << endl;

}
