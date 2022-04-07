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
        if(p[i] == 0) {p[i] = 0; }

        else if(p[i] < 0)
        {
            p[i] = 2;
        }

        else if(p[i] > 0)
        {
            p[i] = 1;
        }

    }


    for(int i = 0;i < n;i++)
    {
        cout << p[i] << " ";
    }
    return 0;




}
