#include <iostream>
using namespace std;
#define ll long long int
int main()
{
    ll n,i,sum = 0,a;

    cin >> n;

    for(i = 0;sum <= n;i++)
    {
        a = 1 + i;
        //cout << a << " ";
        sum = sum + a;

    }

    cout << a-1 << endl;
}
