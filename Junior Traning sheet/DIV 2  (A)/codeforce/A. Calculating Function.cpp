#include <iostream>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin >>n;
    if(n%2) cout << "-" << n/2 +1 << endl;
    else cout<< n/2 << endl;
    return 0;
}
