#include <iostream>
#include <math.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin >> n;

    for(int i = 0;;i++)
    {
        if(pow(2,i) == n)
        {
            cout << "YES" << endl;
            break;
        }
        else if(pow(2,i) > n)
        {
            cout << "NO" << endl;
            break;
        }

    }
}
