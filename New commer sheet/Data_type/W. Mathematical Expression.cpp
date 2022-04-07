#include <iostream>
using namespace std;

int main()
{
    int a,b,f,d;

    char c,e;

    cin >> a >> c >> b >> e >> f;///3 + 4 = 7

    if(c == '+')
    {
        d = a + b;
    }
    else if(c == '-')
    {
        d = a - b;
    }
    else if(c == '*')
    {
        d = a * b;
    }

    if(f == d) cout << "Yes" << endl;

    else cout << d << endl;
}


