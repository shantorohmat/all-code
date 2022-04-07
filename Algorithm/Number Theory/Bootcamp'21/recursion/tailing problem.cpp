#include <iostream>
using namespace std;
int tailing(int n)
{
    if(n == 0) return 0;
    return 1 + tailing(n - 1);
}
int tailing_1(int n)
{
    if(n == 0) return 0;
    return 4 + tailing_1(n - 4);
}
int main()
{
    int n;
    cin >> n;
    cout << tailing(n) << endl;
    cout << tailing_1(n) << endl;
}
