#include <iostream>
#include <math.h>
using namespace std;

bool IsPrime(int n)
{
    if(n < 2) return false;

    else if(n == 2) return true;

    else if(n % 2 == 0) return false;

    else if(n > 2)
    {
        for(int i = 3;i < n;i++)
        {
            if(n % i == 0)
                return false;
        }
        return true;
    }

}

void primefactor(int n)
{
    int s[100];

    int m = n;

    for(int i = 0;i < 100;i++)s[i] = 0;
    for(int i = 2;i <= sqrt(n);i++)
    {
        n = m;
        //cout << n << endl;
        if( n % i == 0)
        {
            if(IsPrime(i)){
            while(n%i == 0){


            if(n % i == 0){
            s[i]++;
           // cout << i << " " << s[i] << endl;
            }
           // else break;
            n = n/i;
        }
        }
        }
        //cout << n << endl;
    }

    for(int i = 2;i <= sqrt(m);i++)
    if(IsPrime(i))
    if(s[i])
        cout << i << "^" << s[i] << endl;
}

int main()
{
     int n;

     cin >> n;

     primefactor(n);
}
