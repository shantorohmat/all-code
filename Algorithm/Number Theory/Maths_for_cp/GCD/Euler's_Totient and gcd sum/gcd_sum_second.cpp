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
    int t,n,c = 0,res = 0;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1;i <= n;i++)
        {
            if(n%i == 0)
            {
                for(int j = 1;j <= n;j++)
                {
                    if(gcd(j,n) == i)
                    {
                        c++;
                    }
                }
                res += c*i;
            }
        }
        cout << res << endl;

    }
}
