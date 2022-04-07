#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int visited[100001];
vector<int>arr[100002];
void DFS(int v)
{
    visited[v] =1;
    cout << v << "->";
    for(int i = 0;i < arr[v].size();i++)
    {
        int child = arr[v][i];
        if(visited[child] == 0)
            DFS(child);
    }
}
int main()
{
    cout << "Number of Node and Number of edges : ";
    int n,m,a,b;
    //n = number of Node // m = number of edges
    cin >> n >> m;


    while(m--)
    {
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    DFS(1);
}
