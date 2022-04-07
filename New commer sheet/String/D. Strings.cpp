#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a,b;

    int d;

    getline(cin,a);

    getline(cin,b);

    cout << a.size() << " " << b.size() << endl;

    cout << a << b << endl;

    char x = a[0];


    for(int i = 0; i < a.size(); i++)

    {
        if(i == 0) a[i] = b[i];

        cout << a[i] ;

    }
    cout << " ";


    for(int i = 0; i < b.size(); i++)
    {
        if(i == 0) b[i] = x;
        cout << b[i];


    }

    return 0;

}
