#include <iostream>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin >> n;
    int a;

    for(int i = 1;;i++)
    {
        a = n+1-i >> 2;
        if(a == n)
            break;
    }

   cout << a << endl;
}
