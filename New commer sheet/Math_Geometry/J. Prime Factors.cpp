#include <iostream>
using namespace std;
#define ll long long int

void primefactor(int n)
{
    int c = 0,b = 0;
    for(int i = 2;i*i <= n;i++)
    {
        //n = a;
        c = 0;
        if(n % i == 0)
        {
            b++;
            while(n%i == 0)
            {
                 n = n/i;
                c++;


            }
            //cout << n << endl;
            cout<< "(" << i << "^" << c << ")" ;
            if(n != 1) cout << "*" ;


        }



    }
    ///cout << n << endl;
    if(n > 1)
        {
            cout << "(" << n << "^" << 1 << ")" << endl;
        }
}
int main()
{
    ll n;

    cin >> n;

    primefactor(n);
}
