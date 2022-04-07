#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int m =n;

    for(int r = 1;r <= n;r++)
    {
        for(int c = 1;c < r;c++)
        {
            cout << " ";
        }


        for(int c = 1;c <= ((2*(m))-1);c++)
        {
            cout << "*";

        }


        for(int c = 1;c < r;c++)
        {
            cout << " ";
        }
        cout << endl;
        m--;

    }
    return 0;
}
