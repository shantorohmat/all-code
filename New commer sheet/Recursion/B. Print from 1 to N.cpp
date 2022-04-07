#include <iostream>
using namespace std;
void rec(int n)
{
    static int i = 1;
    if(n > 0)
    {
        cout << i << endl;
        i++;
        rec(n - 1);

    }
}
int main()
{
    int n;
    cin >> n;

    rec(n);
}
