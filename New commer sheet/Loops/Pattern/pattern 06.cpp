#include <iostream>
using namespace std;

int main()
{
    int n,k;

    cin >> n;

    k = 0;

    for(int r = 1;r <= n;r++)
    {
        if(r == n)
        {
            for(int c = 1;c <= ((2*n)-1);c++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else{
        for(int c = (n-r);c >= 1;c--)
        {
            cout << " ";
        }

        for(int c = 1;c < 2;c++ )
        {
            cout << "*";
        }
        for(int c = 1;c <= ((2*k)-1);c++)
        {
            cout << " ";
        }
        if(r > 1){
        for(int c = 1;c < 2;c++)
        {
            cout << "*";
        }
}

         for(int c = (n-1);c >= 1;c--)
        {
            cout << " ";
        }
        cout << endl;
        k++;
        }
    }
    return 0;
}
