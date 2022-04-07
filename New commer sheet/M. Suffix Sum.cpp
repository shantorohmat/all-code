#include <iostream>
using namespace std;
#define ll long long int
ll arr[100007],sum = 0;
ll fun(ll n,ll m,ll i)
{
    if(i == m +1) return 0;
    return fun(n-1,m,i+1) + arr[n];

}
int main()
{
    ll n,m;
    cin >> n >> m;
    for(int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    cout << fun(n,m,0) << endl;
}
