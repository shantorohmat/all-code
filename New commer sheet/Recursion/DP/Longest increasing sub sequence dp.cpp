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
#define ll long long int
#define ld long long double
using namespace std;

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
int s[] = {5,0,9,2,7,3,4};
int dp[1000];
int dr[1000];
int cnt = 0;
int LIS(int i)
{
    cnt++;
    if(i == 7) return 0;
    int ans = 0;
    if(dp[i] != -1)
        return dp[i];

    for(int j = i+1;j < 7;j++)
    {

        if(s[i] < s[j])
        {
            int mx = LIS(j);
            if(mx > ans)
            {
                ans = mx;
                dr[i] = j;

            }

        }

    }
      dp[i] =  ans + 1;

      return dp[i];
}


void g(int i)
{

    if(i == 7) return ;

    for(int j = i+1;j < 7;j++)
    {

        if(s[i] < s[j] && dr[i] == j || dr[i] == i)
        {
            cout << j << " ";
            g(j);


        }

    }


}

int main()
{
    memset(dp,-1,sizeof(dp));
    memset(dr,-1,sizeof(dr));
    int ans = 0;
    int stat = -1;
   for(int i = 0;i < 7;i++)
   {
       int mx = LIS(i);
            if(mx > ans)
            {
                ans = mx;
                stat = i;
            }

   }

   cout<< "Index : " <<stat << " ";

   g(stat);



   cout<<  endl <<"LIS : " << ans << endl;

   cout <<"count : "<< cnt << endl;
}
