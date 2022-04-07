#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define ll long long int
using namespace std;
int main()
{
    int n,k;
    cin >> n;
    vector <int>v(n);

    for(auto &x : v)
    {
        cin >> x;
    }
    sort(v.begin(),v.end());

    cin >> k;

    for(int i = 0;i < k;i++)
    {
        int x,y;
        cin >> x >> y;

        int l = -1,r = n;

        while(l < r -1)
        {
            int mid  = floor((l + r)/2);

            if(v[mid] > y) r = mid;
            else l = mid;
        }
        //cout << r << " ";
        int h = r;

        l = -1,r = n;

        while(l < r -1)
        {
            int mid = floor((l+r)/2);

            if(v[mid] < x) l = mid;
            else r = mid;
        }
        cout << h - r << endl;
    }
}
