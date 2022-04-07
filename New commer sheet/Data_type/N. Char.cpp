#include <iostream>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char a;

    cin >> a;

    if(a >= 'a' && a <= 'z')
    {
        char d = a - 32;
        cout << d <<  endl;
    }

    else if(a >= 'A' && a <= 'Z')
    {
        char d =  a + 32;
        cout << d <<  endl;
    }
}
