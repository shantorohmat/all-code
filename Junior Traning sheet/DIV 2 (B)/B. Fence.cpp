#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int *arr = new int[n+7];
    arr[0] = 0;
    for(int i = 1;i <= n;i++)
    {
        cin >> arr[i];
    }

    for(int i = 1;i <= n;i++)
    {
        arr[i] += arr[i - 1] ;
    }
    int ans = INT_MAX;
    int InDx = 1;
    for(int i = 1;i<= n-m+1;i++)
    {
        int miN = arr[i+m-1] - arr[i-1];
        //ans = min(miN,ans);
        //cout << miN << endl;
        if(ans > miN)
        {
            ans = miN;
            InDx = i;
        }

    }

    cout << InDx << endl;
}
