
#include<bits/stdc++.h>
using namespace std;

int countchange( int arr[], int row, int col )
{
  int k, j, x, y;

  int dp[col + 1][row];

  for (j = 0; j < row; j++)
    dp[0][j] = 1;


  for (k = 1; k < col + 1; k++)
  {
    for (j = 0; j < row; j++)
    {

      if(k-arr[j] >= 0)
            {
                 x=dp[k - arr[j]][j];
            }
            else{
                x=0;
                }

            if(j >= 1)
            { y=dp[k][j - 1];
             }
             else
             {
                 y=0;
                }
             // total count
             dp[k][j] = x + y;
         }
  }
  return dp[col][row - 1];
}


int main()
{
  int arr[] = {2,4};
  int m = 2;
  int n = 8;
  cout << countchange(arr, m, n);
  return 0;
}
