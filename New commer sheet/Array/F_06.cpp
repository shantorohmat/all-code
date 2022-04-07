#include <iostream>
using namespace std;

int main()
{
    int n,count = 0;

    cin >> n;

    int *p = new int [n];

    for(int i = 0;i < n;i++)
    {
        cin >> p[i];
        count = i;
    }

    for(int i = count ;i >= 0;i--)
    {
        cout << p[i] << " ";
    }
    cout << endl;

    return 0;


}
