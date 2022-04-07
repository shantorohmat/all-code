#include <iostream>
using namespace std;
int arr[6];
void print(int n,int k)
{
    if(k == 0) return ;
    cout << arr[n] << " ";
    print(n-1,k-1);
}
int main()
{
    int n = 6;

    for(int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    cout << "How many want to print : ";
    int k ;
    cin >> k;
    print(n-1,k);
}
