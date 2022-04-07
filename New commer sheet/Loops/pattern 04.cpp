#include <iostream>
using namespace std;

int main()
{
    int n,k;

    cin >> n;

    k = n-1;

    int m = k;

    for(int r = 1;r <= n;r++)
    {
        for(int c = 1;c <= r;c++)
        {
            cout << "*";
        }
        cout << endl;
    }


    for(int r = 1;r <= k;r++)
    {
        for(int c = m;c >= 1;c--)
        {
            cout << "*";
        }
        m--;
        cout << endl;
    }
    return 0;
}
