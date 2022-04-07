#include <iostream>
#include <math.h>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long int
int main()
{
    ll n,maX,miN;
    cin >> n;
    ll *arr = new ll[n];
    for(int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }

    for(int i = 0;i < n;i++)
    {
        maX = max(abs(arr[n-1] - arr[i]),abs(arr[0] - arr[i]));
        miN = min(abs(arr[i] - arr[i-1]),abs(arr[i] - arr[i+1]));
        cout << miN << " " << maX << endl;
    }
}
