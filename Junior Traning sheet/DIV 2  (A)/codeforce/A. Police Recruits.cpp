#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    int p = 0,k = 0;
    for(int i = 0;i < n;i++)
    {
        cin >> arr[i];

        if( p == 0 && arr[i] == -1)
            {
                k++;
                //cout << arr[i] << endl;
                continue;
            }
        if(arr[i] > 0)
        {
            p += arr[i];
            continue;
        }
        else
        {
            if(arr[i]  == -1)
            {
                p--;
                continue;
            }

        }
    }
    cout << k << endl;
}
