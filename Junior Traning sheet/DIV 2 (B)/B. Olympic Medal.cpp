#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *x = new int[n];
    int maX = 0;
    for(int i = 0 ;i < n;i++)
    {
        cin >> x[i];
        maX = max(x[i],maX);
    }
    int r = maX;

    int m;
    cin >> m;
    int *y = new int [m];
    maX = 0;
    for(int i = 0;i < m;i++)
    {
        cin >> y[i];
        maX = max(maX,y[i]);

    }
    int p1 = maX;
    int k;
    cin >> k;
    int *z = new int[k];
    maX = INT_MAX;
    for(int i = 0;i < k;i++)
    {
        cin >> z[i];
        maX = min(maX,z[i]);
    }
    int p2 = maX;
    int a,b;
    cin >> a >> b;
    cout.precision(12);

    double xx = r * sqrt((double)(b*p1)/((b*p1) + (a*p2)));
    cout <<fixed << xx << endl;
}
