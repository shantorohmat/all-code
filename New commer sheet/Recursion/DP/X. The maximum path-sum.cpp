#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
int a[100][100];
int r,c,cur_sum = 0;
int dp[11][11][200000];/// first step  --->using state determined dimension
int pathsum(int i,int j,int sum)/// three state
{
    if(i == r && j == c)
    {
        return a[i][j] + sum;
    }
    if(dp[i][j][sum] != -1)///Third step
        return dp[i][j][sum];
    int d = INT_MIN;
    int b = INT_MIN;
    if(i +1<= r)
     d = pathsum(i+1,j,sum+a[i][j]);
    if(j +1<= c)
     b = pathsum(i,j+1,sum+a[i][j]);
    dp[i][j][sum] =  max(d,b);///fourth step
    return dp[i][j][sum];

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

  cout <<   pathsum(1,1,0);
}
