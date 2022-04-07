#include <iostream>
using namespace std;
int cnt = 0;
int fib(int n)
{
    cnt ++;
    if(n <= 2) return 1;
    else return fib(n-1) + fib(n-2);
}
int main()
{
    int n;
    cin >> n;
    cout << fib(n) << endl;
    cout << cnt << endl;
}
