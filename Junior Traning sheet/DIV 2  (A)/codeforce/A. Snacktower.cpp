#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    int n,x,vis[100007];
    cin >> n;
    memset(vis, 0, sizeof(vis));
    vector<int>v;

    for(int i = 0;i < n;i++)
    {
        cin >> x;
        v.push_back(x);

    }

    for(int i = 0,j = n;i < n;i++)
    {
        vis[v[i]] = 1;
        if(v[i] == j){
        while(vis[j])
        {
            cout << j << " ";
            j--;
        }
        cout << endl;
        }
        else cout << endl;
    }
}
