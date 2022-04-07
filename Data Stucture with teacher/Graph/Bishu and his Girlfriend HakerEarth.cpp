#include <iostream>
#include <vector>
#include <algorithm>
#define INF 1000000000
using namespace std;
vector<int>v[100005];
int vis[100005];
int dis[100005];
void DFS(int node,int d)
{
    vis[node] = 1;
    dis[node] = d;

    //for(int i = 1;i <= v[node].size()+2;i++)
    for(int i : v[node])
    {
        if(vis[i] == 0)
        {
            DFS(i,dis[node] + 1);
        }
    }
}
int main()
{
    int n, i,a,b;
    cin >> n;
    for(i = 1;i <= n-1;i++)
    {
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }
    DFS(1,0);
    int q, c, ans = -1;
    cin >> q;
    int Min = INF;

    while(q--)
    {
        cin >> c;

        if(Min > dis[c])
        {
            Min = dis[c];
            ans = c;


        }
         else
        {

            if(Min == dis[c] && c < ans)
           {
                ans = c;
           }
        }
    }
    cout << ans <<  endl;

}
