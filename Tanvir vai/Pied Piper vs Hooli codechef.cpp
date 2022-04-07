#include <iostream>
#include <queue>
#include <algorithm>
#define ll long long int
using namespace std;
int main()
{
    ll t;

    cin >> t;

    priority_queue<ll>pq;

    while(t--)
    {
        ll n,a,b,x,y,z,j = 0,p,qq;

        cin >> n >> a >> b >> x >> y >> z;

        for(ll i = 0;i < n;i++)
        {
            cin >> p;
            pq.push(p);
        }

        ll din = (z - b - 1) / y;

        ll zz = a + (din * x);

        while(pq.top() != 0)
        {
            if(zz > z) break;
            else {
            zz = zz + pq.top();
             qq = pq.top()/2;
            pq.pop();

            pq.push(qq);
            j++;
            }


        }
        while(!pq.empty())
        {
            pq.pop();
        }

        if(zz < z) cout << "RIP" << endl;
        else cout << j << endl;


    }


}
