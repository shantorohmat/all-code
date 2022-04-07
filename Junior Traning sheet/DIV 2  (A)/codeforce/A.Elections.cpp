#include <iostream>
#include <algorithm>
#include <math.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b,c;
        cin >> a >> b >> c;
        int k = max(0LL,max(b,c)+1-a);
        cout << k << " ";
        k = max(0LL,max(a,c)+1-b);
        cout << k << " ";
        k = max(0LL,max(a,b)+1-c);
        cout << k << endl;


    }
    
}