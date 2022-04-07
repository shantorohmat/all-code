#include <iostream>
using namespace std;
#define ll long long int
int cnt = 0;
ll fib(ll n)
{

    //if(n ==1) return 0;
    cnt++;
    if(n <= 2) return 1;
    else
    return fib(n-1) +fib(n-2);
}
int main()
{
    ll n;
    cin >> n;
    cout << fib(n) << endl;
    cout << " Count : " << " " << cnt << endl;
}
