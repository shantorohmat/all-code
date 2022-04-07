#include <iostream>
using namespace std;
int main()
{
    int n,i = 1,ans = 0,r;

    cin >> n;

    while(n != 0)
    {

        r = n % 2;
        ans = i * r + ans;
        i = i * 10;
        n = n / 2;

    }
    cout << ans << endl;
}
