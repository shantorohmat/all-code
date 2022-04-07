#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;

    cin >> s;

    int d = s[0] - '0';

    if(d % 2  == 0)
        cout << "EVEN" << endl;
    else cout << "ODD" << endl;

}
