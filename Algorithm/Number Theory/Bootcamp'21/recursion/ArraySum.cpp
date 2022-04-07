#include <iostream>
using namespace std;
int arr[6];
int arrSum(int n)
{
    if(n  < 0) return 0;
    return arr[n] + arrSum(n-1);

}
int main()
{
    int n = 6;

    for(int i = 0;i < n;i++)
        cin >> arr[i];

    int k ;
    cin >> k;
    cout << arrSum(k) << endl;

}
