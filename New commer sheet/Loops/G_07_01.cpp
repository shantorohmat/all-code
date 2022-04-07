#include <iostream>
using namespace std;

long long int fact(int  n)
{
    if(n == 1) return 1;

    else
    {
        return n * fact(n -1);

    }
}

int main()
{
    int t;

    cin >> t;

    while(t--){
    int n;

    cin >> n;

    long long int sum = fact(n);

    cout << sum << endl;
    }
    return 0;
}

