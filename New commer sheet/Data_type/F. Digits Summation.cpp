#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s,p;

    cin >> s >> p;

    int d = (s[s.size()-1] - '0') + (p[p.size()-1] - '0');

    cout << d << endl;

    return 0;

}
