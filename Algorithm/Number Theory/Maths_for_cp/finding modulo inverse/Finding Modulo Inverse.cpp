#include <iostream>
using namespace std;
int main()
{
    int a,m,p,x;
    cin >> a >> p>>m;

    for(int i = 1;i < m;i++)
    {
        int n = a * i;
        if(n % m == 1)
        {
             x = i;
            //cout << i << endl;
            break;
        }

    }

    int ans = ((a%m) *(x%m))%m;

    cout << "(" <<a << "/" << p << ") % "<< m << " : ";

    cout << ans << endl;
}
