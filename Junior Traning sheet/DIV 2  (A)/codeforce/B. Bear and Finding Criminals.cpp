#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int *a = new int[n+7];

    int sum = 0;

    for(int i = 1;i <= n;i++)
    {
        cin >> a[i];

    }
    for(int i = 1;i <= n;i++)
    {

        sum += a[i];
    }
//    cout << sum << endl;
    for(int j = 1;j <= n;j++ )
    {
        if(a[(k+j)] != a[abs(k-j)]  && (k+j) <= n && (k - j) != 0  && (k+j) != n)
        {

            sum-=a[j];
        }
    }
    if(n == 1 && a[k] == 1) {
            cout << 1 << endl;
            return 0;
    }
    else if (n == 1) {
            cout << 0 << endl;
    return 0;
    }


    cout << sum << endl;
}
