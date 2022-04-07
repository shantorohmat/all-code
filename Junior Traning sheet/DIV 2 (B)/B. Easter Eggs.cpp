#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    string b = "ROYGBIV";
    int x = 0;

    x = n / 7;
    for(int i = 0;i < x;i++)
    {
        cout << b ;
    }
    s = "GBIV";

    x = n % 7;
    int k = 0;

    for(int i = 0;i < x;i++)
    {
        cout << s[k];
        if(k == 3) k = -1;
        k++;

    }
}
