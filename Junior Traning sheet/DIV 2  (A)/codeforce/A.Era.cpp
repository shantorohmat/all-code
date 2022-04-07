#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        for(int i = 1;i <= n;i++)
        {
            int k;
            cin >> k;
            ans = max(ans,k-i);
        }
        cout << ans << endl;
    }
}