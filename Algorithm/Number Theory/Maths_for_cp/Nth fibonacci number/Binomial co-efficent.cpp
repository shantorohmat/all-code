#include <iostream>
using namespace std;
#define p 100000007
int F[1000001];

int  power(int a,int n)
{
    int res = 1;

    while(n)
    {
        if(n % 2)
        {
            res = (res * 1LL * a) % p;
            n--;
        }
        else
        {
            a = (a * 1LL * a) % p;
            n /= 2;
        }
    }
    return res;
}
int C(int n,int k)
{
    if(k > n) return 0;

    int res = F[n];

    res = (res * 1LL * power(F[k],p - 2)) % p;

    res = (res * 1LL * power(F[n - k],p - 2)) % p;

    return res;
    cout << res << endl;
}

int main()
{
    F[0] = F[1] = 1;

    for(int i = 2;i <= 1000000;i++)
    {
        F[i] = (F[i - 1] * 1LL * i) % p;
    }
        int q;
        int n,k;

        cin >> q;

        while(q --)
        {
            cin >> n >> k;
            cout << C(n,k) << endl;
        }

}
