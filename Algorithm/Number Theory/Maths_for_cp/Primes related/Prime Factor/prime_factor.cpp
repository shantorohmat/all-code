#include <iostream>
using namespace std;

void prime(int n)
{
    for(int i = 2;i <= n;i++)
    {
        if(n%i == 0)
        {
            int c = 0;

            while(n%i ==0)
            {
                c++;
                n/=i;

            }
            cout << i << "^" << c << endl;
        }
    }
}
int main()
{
     int n;

     cin >> n;

     prime(n);
}
