#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define ll unsigned long long int
using namespace std;
vector<ll>v;
int main()
{
    ll l,r;
    cin >> l >> r;

    if(l%2 == 1)
        l++;
    if(l+2 > r) cout << "-1" << endl;
    else cout << l << " " << l+1 << " " << l+2 << endl;
}

