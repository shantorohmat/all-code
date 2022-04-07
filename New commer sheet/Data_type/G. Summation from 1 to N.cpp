#include <iostream>
using namespace std;
#define ll long long int
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin >> n;

    ll sum = n*(n+1)/2;

    cout << sum << endl;
}
