
#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
int a[100][100];
int r,c,cur_sum = 0;
int dp[11][11];/// first step  --->using state determined dimension
int dr[11][11];
int pathsum(int i,int j)/// three state
{
    if(i == r && j == c)
    {
        return a[i][j] ;
    }
    if(dp[i][j] != -1)///Third step
        return dp[i][j];
    int d = INT_MIN;
    int b = INT_MIN;
    if(i +1<= r)
     d = pathsum(i+1,j) +a[i][j];
    if(j +1<= c)
     b = pathsum(i,j+1)+a[i][j];
     if(d > b)
     {
         dp[i][j] = d;
         dr[i][j] = 2;
     }                            ///fourth step
     else {
         dp[i][j] = b;
         dr[i][j] = 1;
     }
    return dp[i][j];

}
void g(int i,int j)
{
    if(i == r && j == c)
    {
        cout << i << " " <<  j << " " << a[i][j] << endl;
        return  ;
    }
    cout << i << " " << j << " " << a[i][j] <<  endl;
    if(dr[i][j] == 1)
        g(i,j+1);
    else g(i+1,j);
}
int main()
{

    memset(dp,-1,sizeof(dp));///second step
    memset(dr,-1,sizeof(dr));

    cin >> r >> c;

    for(int i = 1;i <= r;i++)
    {
        for(int j = 1;j <= c;j++)
        {
            cin >> a[i][j];
        }
    }

  cout <<   pathsum(1,1) << endl;
  g(1,1);
}

