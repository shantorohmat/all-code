#include <iostream>
using namespace std;

int main()
{
    int n,m= 1,k ;

    cin >> n;

    k = n-1;

    for(int r = 1;r <= n;r++)
    {


        for(int c = (n-r);c > 0;c--)
        {
            cout << " ";
        }



        for(int c = 1;c <= ((2*m)-1);c++)
        {
            cout << "*";
        }



         for(int c = (n-r);c > 0;c--)
        {
            cout << " ";
        }
        cout << endl;



        if(m <= n) m++;

    }
    for(int r = 1;r <= n;r++)
    {
        for(int c = 1;c <= r;c++)
        {
            cout << ' ';
        }



        for(int c = ((2*k)-1); c >= 1;c--)
        {
            cout << '*';

        }



        for(int c = 1;c <= r;c++)
        {
            cout << ' ';
        }
        cout << endl;
        k--;

    }
    return 0;
}
