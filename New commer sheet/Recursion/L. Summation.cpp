#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll  long long int
ll arr[1007],sum = 0;
ll fun(ll n)
{
    if(n < 0) return 0;
    else
    return fun(n-1) + arr[n];



}
int main()
{
    ll n;
    cin >>n;
    for(ll i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    cout << fun(n) << endl;

}

