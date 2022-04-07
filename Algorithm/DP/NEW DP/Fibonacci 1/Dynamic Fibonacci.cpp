#include <iostream>
#include <cstring>
using namespace std;
int dp[1200]; // step 1 : declare dp array using state
int fib(int n) // state
{
    if(n == 0 || n == 1) // base case
        return 1;
    if(dp[n] != -1)// step 3 :
        return dp[n];

    dp [n] = fib(n-1) + fib(n-2); // step 4 :

    return dp[n]; // step 5 :
}
int main()
{
    memset(dp,-1,sizeof(dp)); // second step
    int n;
    cin >> n;
    for(int i = 0;i <= n;i++)
    cout << fib(i) << " ";
}

