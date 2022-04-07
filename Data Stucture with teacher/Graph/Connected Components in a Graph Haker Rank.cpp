#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
vector <int>arr[100005];
int visited[100005];
void DFS(int v)
{
    visited[v] = 1;

    for(int i = 0;i < arr[v].size();i++)
    {
        int child = arr[v][i];
        if(visited[child] == 0)
        {

            DFS(child);
        }
    }
}
int main()
{
    int n,e;
    cin >> n >> e;

    int u,v;

    for(int i = 1;i <= e;i++)
    {
        cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);

    }

    int count = 0;

    for(int i = 1;i <= n;i++)
    {
        if(visited[i] == 0)
        {
            DFS(i);
            count++;
        }
    }
    cout << count << endl;
}
