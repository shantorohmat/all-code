#include <iostream>
using namespace std;

int main()
{
    int n,i= 1,m;

    cin >> n;

    m = n;

    while(m > 0)
    {
        i = i*10;
        m = m /10;

    }
    i  = i/10;
    cout << i <<endl;

    while(n > 0)
    {
        cout << n / i << endl;

        n = n % i;

        i = i / 10;
    }
    cout << endl;
}
