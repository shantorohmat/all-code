#include <iostream>
using namespace std;
int main()
{
    int n,h,sum = 0;
    cin >> n >> h;
    int *arr = new int [n];

    for(int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }

    for(int i = 0;i < n;i++)
    {
        if(arr[i]>h)
        {
            sum += 2;
        }
        else sum += 1;
    }
    cout << sum << endl;
}
