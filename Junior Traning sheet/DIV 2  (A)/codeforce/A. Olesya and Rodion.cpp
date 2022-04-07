#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    string s ;
    if(n<2 && k == 10) {

    cout << -1 << endl;
    return 0;
    }

    if(k == 10)
    {
        cout << 1;
        for(int i = 0;i < n - 1;i++)
            cout << 0;
    }
    else
    {
        for(int i = 0;i < n;i++)
            cout << k;
    }
    cout << endl;

}
