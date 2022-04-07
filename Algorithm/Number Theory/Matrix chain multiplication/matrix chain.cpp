#include <iostream>
using namespace std;
int K[10][10] = {0};
int optimal_parens(int i,int j)
{
    if(i == j) cout << "A" << i  ;
    else
    {
        cout << "(";
        optimal_parens(i,K[i][j]);
        optimal_parens(K[i][j]+1,j);
        cout << ")";
    }
}
int main()
{
    int n = 5;
    int P[] = {3,2,4,2,5};
    int C[10][10] = {0};


    for(int d = 1;d < n-1;d++)
    {
        for(int i = 1;i < n - d;i++)
        {
            int j = i+d;
             int min = INT_MAX;

            for(int k = i;k <= j -1;k++)
            {
                int p = (P[i-1] * P[k]* P[j]);

                int q = C[i][k] + C[k+1][j] + p;
//                cout << q << endl;
                if(q < min)
                {
                    min = q;
                    K[i][j] = k;
                }
            }
            C[i][j] = min;

        }
    }
//     cout <<  C[1][4] << endl;
        optimal_parens(1,4);





}

