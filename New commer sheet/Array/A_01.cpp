#include <iostream>
using namespace std;

int main()
{
    long long int  n,sum =0;

    cin >> n;

    long long int *p = new long long int [n];

    for(int i = 0;i < n;i++)
    {
        cin >> p[i];
    }

    for(int i = 0;i < n;i++)
    {
        sum = p[i] + sum;
    }

   if(sum < 0) sum = -sum;

    cout << sum << endl;

    return 0;
}
