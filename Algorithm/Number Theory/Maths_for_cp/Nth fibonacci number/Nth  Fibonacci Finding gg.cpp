#include <iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
ll arr[3],I[3][3],T[3][3];

void mul(ll I[][3],ll T[][3],ll dim)
{
    ll res[dim+1][dim+1];

    for(int i = 1;i <= dim;i++)
    {
        for(int j = 1;j <= dim;j++)
        {
            res[i][j] = 0;
            for(int k = 1;k <= dim;k++)
            {
                ll x = (I[i][k] * T[k][j])%mod;
                res[i][j] = (res[i][j]+x)%mod;


            }
        }
    }
    for(int i = 1;i<= dim;i++)
    {
        for(int j = 1;j <= dim;j++)
        {
            I[i][j] = res[i][j];
        }
    }
}
ll getFib(int n)
{
    if(n <= 2) return arr[n];

    I[1][1] = I[2][2] = 1;
    I[1][2] = I[2][1] = 0;

    T[1][1] = 0;

    T[1][2] = T[2][1] = T[2][2] = 1;

    n = n-1;

    while(n)
    {
        if(n%2)
            mul(I,T,2),n--;
        else
            mul(T,T,2),n /= 2;  /// 00 01
                                /// 10 11
    }

    ll x = (arr[1] * I[1][1] + arr[2] * I[2][1])%mod;

    return x;

}


int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int n;
        cin >> arr[1] >> arr[2] >> n;
        n++;
        cout<< getFib(n) << endl;

    }
}
