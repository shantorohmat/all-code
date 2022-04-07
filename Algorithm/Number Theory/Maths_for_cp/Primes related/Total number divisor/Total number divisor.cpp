#include <iostream>
using namespace std;
primefactor(int n)
{
    int res = 1;

    for(int i = 2;i * i <= n;i++)
    {
        if(n % i == 0)
        {
            int c = 0;

            while(n%i == 0)
            {
                n/=i;
                c++;
            }
            cout << i << "^" << c << "*";
            int x = c + 1;
            res = x * res;
        }
    }
    cout << endl;
    cout << res << endl;
}
int  main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int a;
        cin >> a;
        primefactor(a);
    }
}
