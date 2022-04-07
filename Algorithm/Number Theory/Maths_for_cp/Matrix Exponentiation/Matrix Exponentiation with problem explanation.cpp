#include <iostream>
using namespace std;
#define N 100
int arr[N][N],I[N][N];
void mul(int I[][N],int arr[][N],int dim )
{
    int res[dim+1][dim+1];
    for(int i = 1;i <= dim;i++)
    {
        for(int j = 1;j <= dim;j++)
        {
            res[i][j] = 0;
            for(int k = 1;k <= dim;k++)
            {
                res[i][j] += I[i][k] * arr[k][j];
            }

        }
    }
    for(int i = 1;i <= dim;i++)
        for(int j = 1;j <= dim;j++)
    {
        I[i][j] = res[i][j];
    }
}
void Power(int arr[][N],int dim,int n)
{
    for(int i = 1;i <= dim;i++)
    {
        for(int j = 1;j <= dim;j++)
        {
            if(i == j) I[i][j] = 1;
            else I[i][j] = 0;
        }
    }
    for(int i = 1;i <= n;i++)
    {

        mul(I,arr,dim);
    }
    for(int i = 1;i <= dim;i++)
    {
        for(int j = 1;j <= dim;j++)
        {
            arr[i][j] = I[i][j];
        }
    }
}
void PrintMat(int arr[][N],int dim)
{
    for(int i = 1;i <= dim;i++)
    {
        for(int j = 1;j <= dim;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;

    }
}

int main()
{
    int t,dim,n;
    cin>>t;
    while(t--)
    {
        cin >> dim >> n;
        for(int i = 1;i <= dim;i++)
        {
            for(int j = 1;j <= dim;j++)
            {
                cin >> arr[i][j];
            }
        }

        Power(arr,dim,n);
        PrintMat(arr,dim);
    }
}
