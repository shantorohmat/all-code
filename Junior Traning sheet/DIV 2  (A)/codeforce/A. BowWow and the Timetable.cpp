#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#define ll long long int
int main()
{
    string s;
    cin >> s;
    int c = 0;
    if(s[0] == '0'){
        cout << 0 << endl;
        return 0;
    }
    for(int i= 0;i < s.size();i++)
    {
        if(s[i] == '1'){c++;}
    }
    double len = s.size();
    if(c == 1)
    cout << ceil((len - 1) / 2.00) << endl;
    else
    cout << ceil((len ) / 2.00) << endl;


}
