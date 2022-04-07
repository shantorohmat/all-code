#include <iostream>
#include <cstring>
using namespace std;
int a[10000];
    int n,k;
    int dp[20][100000];
int fix_mod(int a,int b)
{
    return (((a%b) + b)%b);
}
int expn(int i,int sum)
{
    if(i == n-1)
        return dp[i][sum] = (fix_mod(sum,k) == 0);

    int p = fix_mod(expn(i+1,sum + a[i+1]),k);
    int q = fix_mod(expn(i+1,sum - a[i+1]),k);

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
