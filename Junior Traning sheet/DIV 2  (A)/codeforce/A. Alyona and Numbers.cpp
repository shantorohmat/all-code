#include <iostream>
using namespace std;
int a[5];
int b[5];
int main()
{
    int n,m;
    cin >> n >> m;
    for(int i = 1;i <= m;i++)
    {
        a[i%5]++;
    }

     for(int i = 1;i <= n;i++)
    {
        b[i%5]++;
    }

    cout << (a[0]*b[0]) + (a[1]*b[4]) + (a[2]*b[3]) + (a[3]*b[2]) + (a[4]*b[1]) << endl;


}
