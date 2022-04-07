#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    long long int *p = new long long int [n];

    for(int i = 0;i < n;i++)
    {
        cin >> p[i];
    }

    for(int i = 0;i < n;i++)
    {
        if(p[i] <= 10)
        {
            cout <<"A["<< i << "]" << " = " << p[i] << endl;
        }
    }

    return 0;
}
