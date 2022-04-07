#include <iostream>
using namespace std;
int coin[100];
int m ;
int coinChange(int n)
{
    int ans = 0;
    if(n == 0) return 1;

    for(int i = 0;i < m;i++)
    {
        if(coin[i] <= n )
         ans += coinChange( n - coin[i]);
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    m = n;
    for(int i = 0;i < n;i++)
    {
        cin >> coin[i];
    }
    int w ;
    cin >> w;

    cout << coinChange(w);
}
