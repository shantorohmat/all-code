#include <iostream>
using namespace std;
int main()
{
    int t;

    cin >> t;

    while(t--){
    int n;

    cin >> n;

    long long int sum = 1;

    for(int i = 1;i <= n;i++)
    {
        sum = sum * i ;
    }

    cout << sum << endl;
    }

    return 0;
}
