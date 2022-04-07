#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    int c =0;

    for(int i = 0;i < n;i++)
    {
        int m,k;
        cin >> m >> k;

        if(x == m || x == 7- m || x == k || x == 7 - k)
        {

            c = 1;

        }
    }
    if(c == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}
