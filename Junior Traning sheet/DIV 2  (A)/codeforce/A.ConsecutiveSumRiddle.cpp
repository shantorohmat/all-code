#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        s.erase(remove(s.begin(),s.end(),s[0]),s.end());
        cout << s << endl;
    }

}