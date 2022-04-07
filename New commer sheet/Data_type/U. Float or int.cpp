#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double s;

    cin >> s;

    int d =  floor(s);

    if(s == d)
        cout << "int " << d << endl;
    else{
        cout << "float " << d << " " << s-d << endl;
    }

}
