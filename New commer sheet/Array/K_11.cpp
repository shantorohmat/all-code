#include <iostream>
using namespace std;

int main()
{

        int n,num,sum = 0;

        cin >> n;

        char *p = new char [n];

        for(int i = 0;i < n;i++)
        {
            cin >> p[i];
        }

        for(int i = 0;i < n;i++)
        {
            num = p[i] - '0';
            sum = num + sum;
            num = 0;
        }

        cout << sum << endl;


    return 0;
}
