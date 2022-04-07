#include <iostream>
#include <string>

using namespace std;


int main()
{
    string a;

    int sum = 0;

    getline(cin,a);

    for(int i = 0;i < a.size();i++)
    {
        int num = a[i] - '0';

        sum = sum + num;

        num = 0;
    }

    cout << sum  << endl;

    return 0;


}

