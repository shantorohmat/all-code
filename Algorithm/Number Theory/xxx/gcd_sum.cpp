#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a == 0)
        return b;
    return gcd(b%a,a);
}
int main()
{
    int n,t,sum = 0;
    cin >> t;
    while(t--)
    {
        sum = 0;
        cin >> n;
        for(int i = 1;i <= n;i++)
        {

            sum += gcd(i,n);
             //cout << gcd(i,n);
        }
        cout << sum << endl;
    }
}
