#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    cout <<s;
    reverse(s.begin(),s.end());
    cout << s << endl;
}
