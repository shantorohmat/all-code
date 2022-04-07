#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v;
    for(int i = 0;i < n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());

    for(int i = 1;i < n;i++)
    {
        v[i] = v[i] + v[i-1];
    }
   // for(auto i : v)
    //    cout << i << " ";
    int index = 0;
    for(int i = 0;i < n;i++)
    {
        int x = v[n - 1] - v[i];
        int y = v[i];
        if(v[i] > x)
        {
            index = i + 1;
            cout << index << endl;
            break;
        }
    }
}
