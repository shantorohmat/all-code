#include <iostream>
#include <string>
using namespace std;

int main()
{
    string  a,b;

    getline(cin,a);

    getline(cin,b);

    cout << a.size() << " " << b.size() << endl;

    cout << a << " " << b << endl;

    return 0;
}
