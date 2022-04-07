#include <iostream>
#include <vector>
using namespace std;
string mz[10]= {".....",
                "....*",
                ".....",
                "*....",
               };
 int r = 4,c = 5;
  int a= 0,b = 0;
bool fun(int x,int y)
{
    if(x == r-1 && y == c-1) return true;

    if(x == r || y == c) return false;

    if(mz[x][y] == '*') return false;

    a = fun(x,y+1);
    b = fun(x+1,y);
    return a || b;

}
int  count(int x,int y)
{
    if(x == r-1 && y == c-1) return 1;

    if(x == r || y == c) return 0;

    if(mz[x][y] == '*') return 0;

    return count(x,y+1) + count(x+1,y);


}

void path_print(int x,int y,string res = "")
{
    if(x == r - 1 && y == c - 1)
    {
        cout << res << endl;
        return;
    }
    if(x == r || y == c) return;

    if(mz[x][y] == '*') return;

    path_print(x,y+1,res + "R");
    path_print(x+1,y,res + "D");
}
vector <pair<int,int>>ans;
void path(int x,int y)
{
    if(x == r - 1 && y == c - 1)
    {
        for(auto el : ans )
        {
            cout << "(" << el.first << ", " << el.second << ")";
        }
        cout << "(" << r-1 << ", " << c - 1 << ")" << endl;
        return;
    }
    if(x == r || y == c) return ;

    if(mz[x][y] == '*') return;

    ans.push_back({x,y});

    path(x,y+1);

    path(x+1,y);

    ans.pop_back();
}
int mat[100][100];
void matrix(int x,int y)
{
    if(x == r - 1 && y == c - 1)
    {
         mat[r - 1][c - 1] = 1;
        for(int i = 0;i < r;i++)
        {
            for(int j = 0;j < c;j++)
            {
                cout << mat[i][j] ;
            }
            cout << endl;
        }
        cout << endl;
        return;
    }
    if(x == r || y == c) return ;

    if(mz[x][y] == '*') return;

    ans.push_back({x,y});
    mat[x][y] = 1;
    matrix(x,y+1);

    matrix(x+1,y);

    mat[x][y] = 0;
}
int main()
{

    int a = fun(0,0);
    if(a == 1)
         cout << "YES" << endl;
    else cout << "NO" << endl;
    cout <<count(0,0) << endl;
    path_print(0,0);

    path(0,0);
    matrix(0,0);


}
/*
.#...
.....
.....
.....
.....

*/

