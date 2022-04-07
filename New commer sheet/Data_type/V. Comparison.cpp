#include <iostream>
using namespace std;

int main()
{
    int a,b;
    char c,d;

    cin >> a >> c >> b;

    if(a > b)
        d = '>';
    else if(a < b)
        d = '<';
    else if(a == b)
        d = '=';
    if(d == c)
        cout << "Right" <<  endl;
    else cout << "Wrong" << endl;
}
