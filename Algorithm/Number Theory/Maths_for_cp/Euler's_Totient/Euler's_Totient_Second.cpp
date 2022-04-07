///O(sqrt(n))
#include <iostream>
#define ll long long int
using namespace std;
ll ETU(ll n)
{
    ll res = n;
    for(ll i = 2;i*i <= n;i++)
    {
        if(n%i == 0){
        res =res / i;
        res =res * (i-1);
       // cout << i << endl;

            while(n%i == 0)
            {
                n=n/i;

            }
        }

    }
    if(n>1)
    {
        res=res/n;
        res=res * (n-1);
    }
    return res;
}
int main()
{
    ll t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << ETU(n) << endl;
    }

}
