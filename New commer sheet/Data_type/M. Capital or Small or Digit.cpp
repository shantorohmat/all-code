#include <iostream>
using namespace std;

int main()
{
    char a;

    cin >> a;

    if(a >= 'a' &&  a <= 'z')
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;

    }

    else if(a >= 'A' &&  a <= 'Z')
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;

    }


    else if(a >= '0' && a <= '9')
        cout << "IS DIGIT" << endl;

    return 0;
}
