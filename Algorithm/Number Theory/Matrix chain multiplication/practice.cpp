
#include <bits/stdc++.h>
using namespace std;
int dp[100][100] ;
int p[] = {3,2,4,2,5};
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


int cost( int i, int j)
{
	if (i == j)
	{
		return 0;
	}
//	if (dp[i][j] != -1)
//	{
//		return dp[i][j];
//	}
	dp[i][j] = INT_MAX;
	int min = INT_MAX;
	for (int k = i; k < j; k++)
	{


//	    int p = (P[i-1] * P[k]* P[j]);

                int q =  cost( i, k) + cost( k + 1, j) + p[i - 1] * p[k] * p[j];
//                cout << q << endl;
                if(q < min)
                {
                   min = q;
                    K[i][j] = k;
                }
                dp[i][j]  = min;



	}
	return dp[i][j] ;
}


int main()
{

	int n = 5;
//	memset(dp, -1, sizeof dp);
    memset(dp, 0, sizeof dp);

	int i = 1, j = n - 1;
	cout <<  cost( 1, 3) << endl;
	for(int i = 1;i < n;i++){
    for(int j = 1;j < n;j++){
	cout << K[i][j] << " ";
    }
    cout << endl;
	}

//     optimal_parens(1,4);


}
