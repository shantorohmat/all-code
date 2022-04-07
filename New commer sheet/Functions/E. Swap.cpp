#include <iostream>
using namespace std;

void swap(int &a,int &b)
{
    int rem = a;
    a = b;
    b = rem;
}

int main()
{
    int x,y;

    cin >> x >> y;

    swap(x,y);

    cout << x << " " << y << endl;

    return 0;

}
