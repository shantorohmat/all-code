#include <iostream>
using namespace std;
int arr[60];
int altSum(int n)
{
    if(n > 6) return 0;
    return arr[n] - altSum(n+1);
}
int main()
{
    int n = 6;
    for(int i = 1;i <= n;i++) cin >> arr[i];

    int sum = 0;

    for(int i = 1;i <= n;i++)
    {
        if(i % 2 == 0) sum -= arr[i];
        else sum += arr[i];
    }
    cout << sum << endl;
    cout << altSum(1);
}
