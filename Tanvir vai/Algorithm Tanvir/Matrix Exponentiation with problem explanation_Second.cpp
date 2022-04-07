#include <iostream>
using namespace std;
#define N 100
#define L(i,n) for(int i = 1;i <= n;i++)
int arr[N][N],I[N][N];
void mul(int arr[][N],int I[][N],int dim)
{
    int res[dim+1][dim+1];

    L(i,dim)
    {
        L(j,dim)
        {
            res[i][j] = 0;
            L(k,dim)
            {
                res[i][j] += I[i][k] * arr[k][j];

            }

        }
    }
    L(i,dim)
    {
        L(j,dim)
        {
            I[i][j] = res[i][j];
        }
    }

}
void Power(int arr[][N],int dim,int n)
{
    L(i,dim)
    {
        L(j,dim)
        {
            if(i == j) I[i][j] = 1;
            else I[i][j] = 0;
        }
    }
    /*L(i,n)
    {
        mul(arr,I,dim);
    }*/
    while(n)
    {
        if(n%2)
        {
            mul(arr,I,dim);
            n--;
        }
        else mul(arr,arr,dim);
    }

    L(i,dim)
    {
        L(j,dim)
        {
            arr[i][j] = I[i][j];
        }
    }
}

void PrintMat(int arr[][N],int dim)
{
    L(i,dim)
    {
        L(j,dim)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


int main()
{
    int t,dim,n;
    cin >> t;
    while(t--)
    {
        cin >> dim >> n;
        L(i,dim){
         L(j,dim){
         cin >> arr[i][j];
         }
        }
        Power(arr,dim,n);
        PrintMat(arr,dim);
    }


}
