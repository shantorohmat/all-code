#include <iostream>
using namespace std;
int biExpo(int base,int n)
{
    int result = 1;

    for(int i = 1;i <= n;i++)
    {
        result = result * base;

    }
    return result;
}

int main()
{
    int n,a;

    cin >> a >> n;

    cout << a << "^" << n << " = " << biExpo(a,n) << endl;
}
