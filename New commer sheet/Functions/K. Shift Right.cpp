#include <iostream>
using namespace std;

int main()
{
    int n,x;

    cin >> n >>x;

    int *p = new int [n];

    for(int i = 1;i <= n;i++)
    {
        cin >> p[i];
    }
    int j = x;
    while(1)
    {

        if(j - n > n)
        {
            int y = j - n;
            j = y - n;
            if(j < n) break;
            else continue;
        }
        else break;
    }
    cout << j << endl;

    for(int i = j;i <= n+j;i++)
    {

        if(i <= n)
        cout << p[i] << " ";
        if(i > n)
        {

            cout << p[i-n+1] << " ";
        }

    }

}
