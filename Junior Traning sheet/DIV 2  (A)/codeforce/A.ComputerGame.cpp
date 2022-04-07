#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<string>v(2);
        cin >> v[0];
        cin >> v[1];
        bool bad = false;
        for(int i = 0;i < n;i++)
        {
            if(v[0][i] == '1' && v[1][i] == '1')
            {
                bad = true;
                break;
            }
        }
        if(bad ) cout << "NO" << endl;
        else cout << "YES" << endl;

    }
}