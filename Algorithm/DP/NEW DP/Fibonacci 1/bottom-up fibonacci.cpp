#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int dp[1200]; // step 1 : declare dp array using state
int fib(int n) // state
{
    for(int i = 0;i <= n;i++)// loop number will same as state number
    {
         if(i == 0 || i == 1) // base case
            dp[i] =  1;
        else
            dp[i] = dp[i-1] + dp[i-2]; // recursive case
    }

    return dp[n];



}
int main()
{
    memset(dp,-1,sizeof(dp)); // second step
    int n;
    cin >> n;
    for(int i = 0;i <= n;i++)
    cout << fib(i) << " ";
}



