#include <iostream>
using namespace std;

int main()
{
    int a,b,c = 0;

    cin >> a >>b;

    if(a%b == 0) c = 1;

    else if(b%a == 0) c = 1;

    if(c == 1) cout << "Multiples" << endl;

    else cout << "No Multiples" << endl;

    return 0;
}
