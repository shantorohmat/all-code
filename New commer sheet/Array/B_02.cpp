#include <iostream>
using namespace std;

int main()
{
    int n,a,count = 0,b = -1;

    cin >> n;

    int *p = new int [n];

    for(int i = 0;i < n;i++)
    {
        cin >> p[i];
    }

    cin >> a;
    for(int i = 0;i < n;i++)
    {
        if(p[i] == a)
        {
            count = 1;
            cout << i << endl;
            break;
        }

    }

    if(count == 0) cout << b << endl;

    return 0;

}
