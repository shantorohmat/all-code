#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;
ll arr[1000000],b[1000000],brr[1000000];
int main()
{
    ll n;

    cin >> n;

    for(ll i = 1;i <=n;i++)
    {
        cin >>arr[i];

    }

    b[0] = 0;


    for(ll i = 1;i <=  n;i++)
    {
        b[i] = b[i-1] + arr[i];
        //cout << b[i] << " ";
    }
    //cout << endl;

    sort(arr,arr+n+1);
//    for(int i = 1;i <= n;i++)
//    {
//        brr[i] = arr[i];
//    }



//    for(int i = 1;i <= n;i++)
//        cout << arr[i] << " ";
//        cout << endl;
    brr[0] = 0;

    for(ll i = 1;i <=  n;i++)
    {
        brr[i] = brr[i-1] + arr[i];
        //cout << brr[i] << " ";
    }
    //cout << endl;

    ll  q; cin >> q;

    while(q--)
    {
        ll t,l,r,m;

        cin >> t >> l >> r;

        if(t == 1)
        {
             m = b[r] - b[l-1];

        }
        else
             m = brr[r] - brr[l-1];
       cout << m << endl;

    }

}
