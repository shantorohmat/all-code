#include <iostream>
using namespace std;
int arr[1000001],pre[1000001],suff[1000001];

int gcd(int a,int b)
{
    if(b == 0) return a;

    else return gcd(b,a%b);
}
int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int n,q,l,r;

        cin >> n >> q;

        for(int i = 1;i <= n;i++)
        {
            cin >> arr[i];
        }

        pre[0] = suff[n+1] = 0;

        for(int i = 1;i <= n;i++)
            pre[i] = gcd(pre[i-1],arr[i]);

        for(int i = n;i >= 1;i--){
            suff[i] = gcd(arr[i],suff[i+1]);
        }

        while(q--){
            cin >> l >> r;
            cout <<gcd(pre[l-1],suff[r+1]) <<endl;
        }
    }
}
