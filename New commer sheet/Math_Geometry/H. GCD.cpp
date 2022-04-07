#include <iostream>
using namespace std;
#define ll long long int

ll gcd(ll a, ll b) {
	   return b == 0 ? abs(a) : gcd(b, a % b);
        }
ll lcd(ll a, ll b) {
        return a / gcd(a, b) * b;
    }

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a,b,s,l;

    cin >> a >> b;

    cout << gcd(a,b) << " ";

    cout << lcd(a,b) << endl;

}

