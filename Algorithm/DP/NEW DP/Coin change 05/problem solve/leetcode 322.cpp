#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>
#include <map>
#include <set>
#include <queue>
#define ll unsigned long long int
#define ld long long double

using namespace std;

const int INF = 1e7;


int mod = 1e9+7;
int fast()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}

int fix_mod(int a,int b)
{
    return (((a&b) + b)%b);
}

int mod_add(int a,int b)
{
    return (a%mod + b%mod) % mod;
}

int add(int a,int b)
{
    if(a < 0) a += mod;
    if(b < 0) b += mod;
    if(a+b >= mod) return a+b-mod;
    return a+b;
}
ll gcd(ll a,ll b)
{
    if(b == 0LL) return a;
    return gcd(b,a%b);
}
int dp[100][100];

//int coin(vector<int>&coins,int amount)
int coin(int i,int arr[],int amount,int n)
{
    if(amount < 0) return INF;

    if(i == n)
    {
        if(amount == 0) return 0;
        return INF;

    }

    if(dp[i][amount] != -1)
        return dp[i][amount];


    int ans,ans_1;
    ans = 1 + coin(i,arr,amount-arr[i],n);
    ans_1 = coin(i+1,arr,amount,n);
    dp [i][amount] = min(ans,ans_1);
    return dp[i][amount];


}

int main()
{
    memset(dp,-1,sizeof(dp));
    //vector <int>&coins;


    int n;
    cin >> n;
      int amount;
    cin >> amount;
    int *arr = new int[n];

    for(int i = 0;i < n;i++)
    {

        cin >>  arr[i] ;
        //coins.push_back(x);
    }



    cout << coin(0,arr,amount,n);



}
