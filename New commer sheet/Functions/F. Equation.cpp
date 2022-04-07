#include <iostream>
#include <math.h>
using namespace std;

void powz(double s,double p)
{
    double sum = 0;

     for(int i = 2;i <= p;i = i+ 2)
    {
        sum = sum + pow(s,i);
    }
    cout << sum << endl;

}
int main()
{
    double x,y,sumz;

    cin >> x >> y;
     powz(x,y);

    return 0;

}
