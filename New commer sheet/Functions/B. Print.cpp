#include <iostream>
using namespace std;

void show(int a)
{
    for(int i = 1;i < a;i++)
    {
        cout << i << " ";
    }
     cout << a;
}
int main()
{
    int n;

    cin >> n;

    show(n);

    return 0;
}
