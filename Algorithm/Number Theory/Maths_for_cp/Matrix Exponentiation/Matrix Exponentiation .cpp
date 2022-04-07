#include <iostream>
using namespace std;
#define N 101

void mul(int I[][N],int A[][N],int n)
{
    int res[N][N],i,j,k;

    for(i = 0; i < n;i++)
    {
        for(j = 0; j < n;j++)
        {
            res[i][j] = 0;
            for(k =0;k < n;k++)
            {
                res[i][j] += I[i][k]*A[k][j];
            }
        }
    }

    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
        {
            I[i][j] = res[i][j];
        }
    }

}
void power(int A[][N],int dim,int n)
{
    int I[N][N],i,j;

    for(int i = 0;i < dim;i++)
    {
        for( j = 0 ;j < dim;j++)
        {
            if(i == j) I[i][j] = 1;
            else I[i][j] = 0;
        }
    }

    for( i = 0;i < n;i++)
    {
        mul(I,A,dim);
    }

    for(i = 0;i < dim;i++)
    {
        for(j = 0;j < dim;j++)
        {
            A[i][j] = I[i][j];
        }
    }

}

void print(int A[][N],int dim)
{
    int i,j;
    for(i = 0;i < dim;i++)
    {
        for(j = 0;j  < dim;j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int dim,i,j,A[N][N],n;
    cout << "Input matrix dimension : ";
    cin >> dim ;
    cout << "Input matrix : ";
    for(i = 0 ;i < dim;i++)
    {
        for(j = 0;j < dim;j++)
        {
            cin >> A[i][j];
        }
    }
    cout << " Input power : ";
    cin >> n;

    power(A,dim,n);
    print(A,dim);
}
