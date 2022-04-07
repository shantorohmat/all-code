#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t,n,c = 0,k = 0;
    ll *arr = new ll[n];

    cin >> t;
    while(t--)
    {
        c = 0,k = 0;
        cin >> n;
        for(int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    for(int i = 0;i < n-1;i++)
    {
        if(arr[i] > arr[i+1])
        {

            c = 1;
            break;
        }
        if(arr[i] == arr[i+1]  && arr[i] > 0)
        {
            k++;
        }
        if(arr[i] == arr[i+1] && arr[i] == 0)
        {
            c = 1;
            break;
        }
    }
    if(c == 0 && k > 0) cout << "YES" << endl;
    if(c == 1) cout << "NO" << endl;
    }




}
