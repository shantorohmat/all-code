#include <iostream>
#define ll long long int
using namespace std;
ll c = 0;
int seq(ll n)
{
    c++;
    if(n == 1) return c;
    if(n%2) n = (3*n) +1;
    else n = n/2;
    seq(n);

}
int main()
{
    ll n;
    cin >> n;
    cout << seq(n) << endl;
}
