#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    int sol = 0;
    int x = 0,y,ans = 0;

    for(int i = 1;i <= n;i++)
    {
        cin >> y;

        sol += x - y;
//        cout <<x << " " << y << " " <<  sol << endl;
        if(sol < 0)
        {
            ans += -sol;
            sol = 0;
        }
        x = y;

    }
    cout << ans << endl;


}
