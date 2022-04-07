#include <iostream>
using namespace std;
int arr[100000],b[1000000];
int main()
{
    int n;

    cin >> n;

    for(int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    b[-1] = 0;
    for(int i = 0;i < n;i++)
    {
        b[i] = b[i-1] + arr[i];
    }
    int q;

    cin >> q;

    while(q--)
    {
        int x,y;

        cin >> x >> y;

        int m = b[y] - b[x-1];

        cout << m << endl;
    }
    return  0 ;
}
