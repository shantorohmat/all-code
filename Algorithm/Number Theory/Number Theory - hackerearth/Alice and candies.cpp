#include <iostream>
using namespace std;
#define ll long long  int
bool valid_pair(ll a,ll b)
{
    ll n2 = (a+b)/2;
    ll n1 = (a-b)/2;

    if(n1 >= 0 and n2 >= 0 and n2 >= n1) return true;
    return false;
}
int main()
{
    ll n;
    cin >> n;
    ll ans = 0;

    for(ll i = 1;i * i <= n;i++)
    {
        if(n%i == 0)
        {
            ll a = i;
            ll b = n/i;
            if((a%2==0  && b%2==0  ) || (a%2==1  && b%2==1 ))
            {
                if(valid_pair(a,b)) ans++;
                if(i*i != n and valid_pair(b,a)) ans++;
            }

        }
    }
    cout << ans << endl;

}
