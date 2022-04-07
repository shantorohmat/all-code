#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
int a[100][100];
int r,c,cur_sum = 0;
int dp[11][11];/// first step  --->using state determined dimension
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
    dp[i][j] =  max(d,b);///fourth step
    return dp[i][j];

}
int main()
{

    memset(dp,-1,sizeof(dp));///second step

    cin >> r >> c;

    for(int i = 1;i <= r;i++)
    {
        for(int j = 1;j <= c;j++)
        {
            cin >> a[i][j];
        }
    }

  cout <<   pathsum(1,1);
}

