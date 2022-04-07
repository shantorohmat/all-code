#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a,b;

    getline(cin,a);

    getline(cin,b);

    if(a>b)
    {
        cout << b << endl;
    }
    else cout << a << endl;

    return 0;

}
