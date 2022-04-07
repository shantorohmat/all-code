
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>
#include <map>
#include <set>
#define ll long long int
#define ld long long double
#define INF 999999
const int Size = 1e2;

using namespace std;

int mod = 1e9+7;
int fast()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}

int fix_mod(int a,int b)
{
    return (((a&b) + b)%b);
}

int mod_add(int a,int b)
{
    return (a%mod + b%mod) % mod;
}

int add(int a,int b)
{
    if(a < 0) a += mod;
    if(b < 0) b += mod;
    if(a+b >= mod) return a+b-mod;
    return a+b;
}
ll gcd(ll a,ll b)
{
    if(b == 0LL) return a;
    return gcd(b,a%b);
}

vector<int>ver[Size];
char  arr[100][100];
int visited[100][100];
int node,edge;


int cnt ;

bool Isvalid(int x,int y)/// row >> col
{
    int row = node;
    int col = edge;
    if(x < 1 || x > row || y < 1 || y > col)
    {
        return false;
    }
    if(visited[x][y] == 1 || arr[x][y] == '#') return false;

    return true;

}
void dfs(int i,int j)
{
    visited[i][j] = 1;

     if(Isvalid(i+1,j) )
    {

        cnt++;
        dfs(i+1,j);
    }

    if(Isvalid(i,j+1) )
    {

        cnt++;
        dfs(i,j+1);
    }

    if(Isvalid(i-1,j)  )
    {

        cnt++;
        dfs(i-1,j);
    }

   if(Isvalid(i,j-1))
    {

        cnt++;
        dfs(i,j-1);
    }

}
int main()
{
    int t;
    cin >> t;
    for(int i = 1;i <= t;i++){

    cin >>  edge >>node ;///  col >> row

    for(int j = 1;j <= node;j++){

   for(int i = 1;i <= edge;i++)
    {
        char u ;
        cin >> u;
        arr[j][i] = u;

    }

}
 memset(visited,0,sizeof(visited));



     for(int i = 1;i <= node;i++ )
    {
        for(int j = 1;j <= edge;j++)
        {
           if( arr[i][j] == '@')
           {

               cnt = 0;
               visited[i][j] = 1;
               dfs(i,j);

           }

        }


    }


    cout << "Case " << i << ": " <<  cnt+1 << endl;
    }



}


