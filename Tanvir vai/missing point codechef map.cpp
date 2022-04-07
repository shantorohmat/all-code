#include <iostream>
#include <map>
#include <iterator>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll t;
    cin >> t;
    while(t--)
    {
        ll n,x,y,h,r;

        cin >> n;

        map<ll,ll> mp1,mp2;
        map<ll,ll> :: iterator it;

        for(ll i = 0;i < ((4*n)-1);i++)
        {
            cin >> x >> y;

            mp1[x]++;
            mp2[y]++;

        }

        for(it = mp1.begin();it != mp1.end();it++)
        {
            if(it->second % 2 == 1)
            {
                h = it->first;
                break;
            }
        }

        for(it = mp2.begin();it != mp2.end();it++)
        {
            if(it->second % 2 == 1)
            {
                r = it->first;
                break;
            }
        }

        cout << h << " " << r << endl;
    }
    return 0;

}
