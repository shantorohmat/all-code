#include <iostream>
using namespace std;
int main()
{
    int n,arr[100000],b[100000],x,y,m;

    cin >> n;

    for(int i = 1;i <= n;i++)
        cin >> arr[i];

    arr[0] = 0;

    for(int i = 1;i <= n;i++)
    {
        arr[i] = arr[i-1]+ arr[i];
    }

    while(1)
    {
        cin >> x >>y;

        m = arr[y] - arr[x-1];

        cout << m << endl;
    }

}
