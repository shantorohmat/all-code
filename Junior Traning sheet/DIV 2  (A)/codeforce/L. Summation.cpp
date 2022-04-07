#include <iostream>
using namespace std;
int arr[1007],sum = 0;
int fun(int n)
{

    if(n == -1) return sum;
    sum = sum + arr[n];
    fun(n-1);

}
int main()
{
    int n;
    cin >>  n;

    for(int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    cout << fun(n-1) << endl;
}
