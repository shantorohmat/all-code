#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long int
int main()
{

	ll n;

	cin >> n;

	int *arr = new int[n+7];
	int *brr = new int [n+7];
	brr[0] = 0;
	arr[0] = 0;


	for(int i = 1;i <= n;i++)
    {
        cin >> arr[i];
        brr[i] = arr[i];
    }
    sort(brr,brr+n+1);


    int m;
    cin >> m;
    int sum = 0 ;

    for(int i = 1;i <= m;i++)
    {
        int t,l,r;
        cin >> t >> l >> r;

        if(t == 1)
        {
            sum = 0;
            for(int i = l;i <= r;i++)
                sum += arr[i];
        }
        else if(t == 2)
        {
            sum = 0;
            for(int i = l;i <= r;i++)
            {
                sum += brr[i];
            }
        }
        cout << sum << endl;
    }


}
