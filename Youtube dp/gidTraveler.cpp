#include <iostream>
using namespace std;
int grid(int arr[][4],int n,int r,int c)
{
    if(r == n && c == n) return 1;
    if(r <= n) return 1 + grid(arr,n,r+1,c);
    else if(c <= n) return  1 + grid(arr,n,r,c+1);
}
int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= n;j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << grid(arr,n,1,1) << endl;
}
