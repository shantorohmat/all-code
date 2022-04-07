
#include <bits/stdc++.h>
using namespace std;
int dp[100][100] ;
int p[] = {3,2,4,2,5};
int K[10][10] = {0};
//int optimal_parens(int i,int j)
//{
//    if(i == j) cout << "A" << i  ;
//    else
//    {
//        cout << "(";
//        optimal_parens(i,K[i][j]);
//        optimal_parens(K[i][j]+1,j);
//        cout << ")";
//    }
//}
 int dr[100][100];

int cost( int i, int j)
{
	if (i == j)
	{
		return 0;
	}
	if (dp[i][j] != -1)
	{
		return dp[i][j];
	}
	dp[i][j] = INT_MAX;
	for (int k = i; k < j; k++)
	{

        int a = (cost( i, k) + cost( k + 1, j) + p[i - 1] * p[k] * p[j]);

        if(dp[i][j] > a ){
            dp[i][j] = a;
            dr[i][j] = 3;
        }


	}
	return dp[i][j];
}



void g( int i, int j)
{
    if(i == j) cout << "A" << i ;

	for (int k = i; k < j; k++)
	{
        int a = (cost( i, k) + cost( k + 1, j) + p[i - 1] * p[k] * p[j]);

        if(dp[i][j] == a  && dr[i][j] == 3){

          cout << "(";
          g(i,k);
          g(k+1,j);
          cout << ")";

        }
	}

}



int main()
{

	int n = 5;
	memset(dr, -1, sizeof(dr));
    memset(dp, -1, sizeof(dp));

	int i = 1, j = n - 1;
	cout <<  cost( i, j) << endl;
	g(i,j);


}
