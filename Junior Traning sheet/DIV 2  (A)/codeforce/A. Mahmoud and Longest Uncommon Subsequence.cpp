#include <iostream>
#include <math.h>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;
int main()
{
    string s,n;
    getline(cin,s);
    getline(cin,n);
    if(s == n)
        cout << -1 << endl;
    else cout << max(s.size(),n.size()) << endl;
}
