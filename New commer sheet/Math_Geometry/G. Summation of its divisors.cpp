#include <iostream>
using namespace std;
#define ll long long int
int main()
{
    ll n,sum = 0;

    cin >> n;

    for(int i = 1;i * i <= n;i++)
    {
        if( n % i == 0)
        {
            if(i == n/i)
            {
                sum += i;
            }
            else
            {
                sum += i + n/i;
            }
        }

    }
    cout << sum << endl;
}
