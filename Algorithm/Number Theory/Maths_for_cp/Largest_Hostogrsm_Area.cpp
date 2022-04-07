#include <iostream>
#include <stack>
#define ll long long int
using namespace std;
int main()
{
    ll t,x;
    cin >> t;
    while(t--)
    {
        ll n,area = 0,max_area = 0;
        cin >> n;
        ll arr[n];
        for(int i = 0;i < n;i++)
        {
            cin >> arr[i];
        }
        int i = 0;
        stack <ll>s;
        while(i<n)
        {
            if(s.empty() || arr[s.top()] <= arr[i])
            {
                s.push(i);
                i++;

            }
            else
            {
                x = s.top();
                s.pop();
                if(s.empty())
                {
                    area = arr[x]*1 ;

                }
                else area = arr[x] * (i-1-s.top());
            }
            if(area > max_area) max_area = area;
        }

        while(!s.empty())
        {
            x = s.top();
            s.pop();
                if(s.empty())
                {
                    area = arr[x];

                }
                else area = arr[x] * (i-1-s.top());

            if(area > max_area) max_area = area;

        }

        cout << max_area << endl;
    }
}
