#include <iostream>
using namespace std;

int main()
{
    char e;

    int n;

    cin >> e;

    cin >> n;

    int * p = new int [n];

    for(int i = 0;i < n;i++)
    {
        cin >> p[i];
    }

    for(int i = 0;i < n;i++)
    {
        while(p[i]--)
        {
            cout << e;

        }
        cout << endl;
    }
    return 0;

}
