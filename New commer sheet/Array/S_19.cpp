///2D Array
#include <iostream>
using namespace std;
#define size 1000
int main()
{
    int n,m,x,count = 0;
   /// int **p = new *int[size][size];

     int(*p)[size] = new int[size][size];

    cin >> n >> m;

    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            cin >> p[i][j];
        }
    }

//    for(int i = 0;i < n;i++)
//    {
//        for(int j = 0;j < m;j++)
//        {
//            cout <<  p[i][j] << " ";
//        }
//        cout << endl;
//    }

    cin >> x;

    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            if(p[i][j] == x)
            {
                count = 1;
                break;

            }
        }

    }
    if(count == 1) cout << "will not take number" << endl;
    else cout << "will take number" << endl;

    return 0;



}
