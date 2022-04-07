#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long int
int main()
{

	ll n;

	cin >> n;

	ll *arr = new ll[n+7];
	ll *brr = new ll [n+7];
	brr[0] = 0;
	arr[0] = 0;


	for(ll i = 1;i <= n;i++)
    {
        cin >> arr[i];
        brr[i] = arr[i];
    }
    sort(brr,brr+n+1);


    ll m;
    cin >> m;
    ll sum = 0 ;

    for(ll i = 1;i <= n;i++)
    {
        arr[i] += arr[i-1];
//        cout << arr[i] << " ";

    }
//    cout << endl;
    for(ll i = 1;i <= n;i++)
    {
        brr[i] += brr[i-1];
        //cout << brr[i] << " ";

    }
     for(int i = 1;i <= m;i++)
    {
        int t,l,r;
        cin >> t >> l >> r;
        sum = 0;

        if(t == 1)
        {
           sum = arr[r] - arr[l-1];
        }
        else if(t == 2)
        {
            sum = 0;
            sum = brr[r] - brr[l-1];
        }
        cout << sum << endl;
    }


}
