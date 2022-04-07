#include <iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
ll arr[2],I[2][2],T[2][2];

void mul(ll I[][2],ll T[][2],ll dim)
{
    ll res[dim][dim];

    for(int i = 0;i < dim;i++)
    {
        for(int j = 0;j < dim;j++)
        {
            res[i][j] = 0;
            for(int k = 0;k < dim;k++)
            {
                ll x = (I[i][k] * T[k][j])%mod;
                res[i][j] = (res[i][j]+x)%mod;


            }
        }
    }
    for(int i = 0;i < dim;i++)
    {
        for(int j = 0;j < dim;j++)
        {
            I[i][j] = res[i][j];
        }
    }
}
ll getFib(int n)
{
    if(n < 2) return arr[n];

    I[0][0] = I[1][1] = 1;
    I[0][1] = I[1][0] = 0;

    T[0][0] = 0;

    T[0][1] = T[1][0] = T[1][1] = 1;



    while(n)
    {
        if(n%2)
            mul(I,T,2),n--;
        else
            mul(T,T,2),n /= 2;
    }

    ll x = (arr[0] * I[0][0] + arr[1] * I[1][0])%mod;

    return x;

}


int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int n;
        cin >> arr[0] >> arr[1] >> n;
        cout<< getFib(n) << endl;

    }
}
