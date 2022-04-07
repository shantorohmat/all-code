#include <iostream>
using namespace std;
string mz[10]= {".....",
                "..*.*",
                ".*...",
                "*..#.",
               };
 int r = 4,c = 5;
  int a= 0,b = 0;
int fun(int x,int y)
{
    if(mz[x][y] == '#')
    {
        return 1;
    }

    if(mz[x][y+1] != '*' && y+1 < c)
    {
        a = fun(x,y+1);

    }
    if(mz[x+1][y] != '*' && x+1 < c)
    {
        b = fun(x+1,y);
    }

    return a || b;

}
int main()
{

    int a = fun(0,0);
    if(a == 1)
         cout << "YES" << endl;
    else cout << "NO" << endl;



}
/*
.#...
.....
.....
.....
.....

*/
