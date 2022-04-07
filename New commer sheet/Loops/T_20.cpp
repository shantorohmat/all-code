#include <iostream>
using namespace std;
int main()
{
    int n;

    cin >> n;

    for(int i = (n-1),k = 0;k < n;i--,k++)
    {
        for(int j = i;j > 0;j-- )
        {
            cout << ' ';
        }

        for(int j = 0;j <= k;j++)
        {
            cout << "*";
        }

        for(int i = 0;i < k;i++)
        {
            cout << "*";
        }
        cout <<endl;

    }
    cout << endl;
    return 0;


}
