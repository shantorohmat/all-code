#include <iostream>
using namespace std;
int main()
{
    int a =81 ,b = 57;
    int x1 = 3 ,y1 = -7;

    int x = y1;
    int y = x1 - ((a/b)* y1);
    cout << "x : " << x << endl;
    cout << "Y : " << y << endl;
}
