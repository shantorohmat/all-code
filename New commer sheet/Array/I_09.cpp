#include <iostream>
#include <algorithm>
#include <vector>
#include<algorithm>
#define ll long long int
using namespace std;
int main()
{
    vector<ll>v;

    ll t,arr[100001],sum[100001],n,l,k;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 0;i < n;i++)
        {
            cin >> arr[i];
            //i++;
            sum[i] = arr[i];
        }
    }


    sort(sum,sum+n);

    ll a = sum[0];
    ll b = sum[1];
    for(ll i = 0;i < n;i++)
    {
        if(a == arr[i])
        {
            k = i;
        }
        else if(b == arr[i])
        {
            l =i;
        }
    }

    int ans = a+b+l-k;
   cout << ans << endl;

}
