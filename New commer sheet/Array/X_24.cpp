#include <iostream>
using namespace std;
#define size 1000
int main()
{
    int n,m,count1;

    cin >> n >> m;

    char (*p) [size] = new char [size] [size];
    int (*count) [size] = new int [size] [size];
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            cin >> p[i][j];

            if(p[i][j] == 'x')
            {
                count[i][j] = 1;
            }
            else count[i][j] = 0;
        }
    }


    int x,y;

    cin >> x >> y ;




    for(int i = x-1;i <= x+1;i++)
    {
        for(int j = y-1;j <= y+1;j++)
        {
            if(x == i && y == j)
            {
                continue;
            }

            if(count[i][j] != 1)
            {
               count1 = 0;
               break;

            }
            else
            {
                count1 = 1;
            }


        }
       if(count1 == 0) break;
    }

    if(count1 == 1) cout << "yes" << endl;

    else cout << "no" << endl;

    return 0;

}
