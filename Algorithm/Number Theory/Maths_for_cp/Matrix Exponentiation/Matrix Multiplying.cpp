#include <iostream>
using namespace std;

void Mul(int A[][5],int B[][5],int dim)
{
    int res[5][5];

    for(int i = 1;i <= dim;i++)
    {
        for(int j = 1;j <= dim;j++)
        {
            res[i][j] = 0;
            for(int k = 1;k <= dim;k++)
            {
                res[i][j] +=  A[i][k] * B[k][j];
               // cout << res[i][j] << " ";
            }

        }
    }


    for(int i = 1;i <= dim;i++)
    {
        for(int j = 1;j <= dim;j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int t,dim,i,j,A[5][5],B[5][5];



        cout << "Dimension of first & second matrix : ";
        cin >> dim;

        cout << "input first matrix : (" << dim * dim  << " element ) ";

        for(i = 1;i <= dim;i++)
        {
            for(j = 1;j <= dim;j++)
            {
                cin >> A[i][j];
            }
        }

         cout << "input second  matrix : (" << dim * dim  << " element ) ";

        for(i = 1;i <= dim;i++)
        {
            for(j = 1;j <= dim;j++)
            {
                cin >> B[i][j];

            }
        }

        Mul(A,B,dim);

}
