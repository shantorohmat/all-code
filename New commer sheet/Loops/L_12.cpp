#include <iostream>
using namespace std;

int main()
{
    int m,n,i;

    cin >> n >> m;

    if (n < m)
        i = n;
    else i = m;

    for(int j = i;j >= 0;j--)
    {
        if(n % j == 0 && m % j == 0)
        {
            cout << j << endl;
            break;
        }
    }
    return 0;

}
