#include <iostream>
using namespace std;

int main()
{

    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    int y = n / 365;

    int m = n % 365;

    int month = m /30;

    int d = m % 30;

    int day = d / 1;

    cout << y <<  " years" << endl;
    cout << month << " months" << endl;
    cout << day << " days" << endl;
}
