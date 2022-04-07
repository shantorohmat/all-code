#include <iostream>
using namespace std;
int main()
{
    int n,b,d,sum = 0,counT = 0;
    cin >> n >> b >> d;
    int *arr = new int[n];
    for(int i = 0;i < n ;i++)
    {
        cin >> arr[i];
    }

    for(int i = 0;i < n;i++)
    {
        if(arr[i] <= b){
        sum += arr[i];
        if(sum > d)
        {
            sum = 0;
            counT++;
        }
        }
    }
    cout << counT << endl;
}
