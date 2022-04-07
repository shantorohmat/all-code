#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int s;

    cin >> s;

    int m[1000];

    for(int i = 0;s != 0;i++)
    {
        m[i] = s % 2;
        s = s / 2;

        cout <<m[i]  << " ";
    }

}
