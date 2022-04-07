#include <iostream>
#include <cstring>
using namespace std;
int a[10000];
    int n,k;
    int dp[100][100];
int expn(int i,int sum)
{
    if(i == n-1)
        return dp[i][sum] = (sum % k == 0);
    int p = expn(i+1,sum + a[i+1]);
    int q = expn(i+1,sum - a[i+1]);

    if(dp[i][sum] != -1)
        return dp[i][sum];

    if(p == 1 || q == 1)
        return 1;
    else return 0;

    ///return p || q;
}
int main()
{
    memset(dp,-1,sizeof(dp));

    cin >> n >> k;


    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    cout << expn(0,a[0]);


}
