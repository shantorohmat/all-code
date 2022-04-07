#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <functional>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    char arr[1000][1000];
    int ans[100000];
    int ss = 0;
    int nx = 0;
    int idx1,idx2;

    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            cin >> arr[i][j];


            if(arr[i][j] == 'G')
            {
                idx1 = j;
            }
            if(arr[i][j] == 'S')
            {
                idx2 = j;
            }

        }
        int mx = idx2 - idx1;
        //cout << mx << endl;
        if(mx >= 0)
            ans[nx++] = mx;
            else
            {
                cout << -1 << endl;
                return 0;
            }
    }




    set<int>s;
    for(int i = 0;i < n;i++)
    {
       // mp[ans[i]]++;
       s.insert(ans[i]);
    }
    cout << s.size() << endl;
//


}
