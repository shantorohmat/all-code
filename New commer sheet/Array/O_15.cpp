#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    long long int first = 0,second = 1,fibo;

    for(int i = 0;i < n;i++)
    {
        if(i <= 1)
        {
            fibo = i;
        }
        else
        {
            fibo = first + second;

            first = second;

            second = fibo;
        }
    }
    cout << fibo << endl;

    return 0;
}
