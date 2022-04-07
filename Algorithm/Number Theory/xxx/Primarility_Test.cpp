///Time Complexity O(sqrt(n))
#include <iostream>
using namespace std;
bool primaility(int n)
{
    if(n < 2) return false;

    for(int i = 2;i * i <= n;i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n,a;

    cin >> n;

    while(n--)
    {
        cin >> a;

        if(primaility(a) == 1)
        cout << "yes" << endl;
        else cout << "no" << endl;

    }
    return 0;
}
