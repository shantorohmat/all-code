#include <iostream>
#include <math.h>
using namespace std;
#define size 1000
int s[size];

void prime()
{
    for(int i = 2;i <= size ;i++)
    {
        s[i] = 1;
    }
    for(int i = 2;i <= sqrt(size);i++)
    {
        if(s[i] == 1)
        {
            for(int j = 2;i*j <= size;j++)
            {
                s[i*j] = 0;
            }
        }
    }
}

int main()
{
    int n;

    cin >> n;

    prime();

    for(int i = 2;i <= n;i++)
    {
        if(s[i] == 1)
        {
            cout << i << ' ';
        }
    }
    cout << endl;

    return 0;
}
