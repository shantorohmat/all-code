#include <iostream>
using namespace std;

int main()
{
    int a,c;
    char b;

    cin >> a >> b >> c;

    if(b == '+')
    {
        int d = a + c;

        cout << d << endl;
    }
    else if(b == '-')
    {
        int d = a - c;
        cout << d << endl;
    }
    else if(b == '*')
    {
        int d =  a*c;
        cout << d << endl;
    }
    else if(b == '/')
    {
        int d = a / c;

        cout << d << endl;
    }

    return 0;
}
