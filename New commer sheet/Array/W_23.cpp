#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define size 1000

int main()
{
    int n,m;

    cin >> n >> m;

    int (*p)[size] = new int [size] [size];

//    cout <<endl;

    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            cin >> p[i][j];
        }
    }
//    cout << endl;

    for(int i = 0;i < n;i++)
    {
        for(int j = m-1;j >= 0;j--)
        {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }

    return 0;


}
/// x.xxxxxxx.x.x.

