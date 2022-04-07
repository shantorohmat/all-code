#include <iostream>
using namespace std;
int phi[1000001];
#define maxN 1000001
int getcount(int d,int n)
{
    for(int i = 0;i <= maxN;i++)
        phi[i] = i;
    for(int i = 2;i <= maxN;i++)
    {
        if(phi[i] == i)
        {
            for(int j = i ;j <= maxN;j+=i)
            {
                phi[j]/=i;
                phi[j]*=(i-1);
            }
        }
    }
    return phi[n/d];
}
int main()
{
    int T,n;
    cin >> T;
    while(T--)
    {
        int res = 0;
        cin >> n;
        for(int i = 1;i * i<= n;i++)
        {
            if(n%i == 0)
            {
                int d1 = i;
                int d2 = n/i;
                //if(d1 == d2)
                res += d1 * getcount(d1,n);

                if(d1 != d2)
                    res += d2 * getcount(d2,n);
            }

        }
        cout << res << endl;
    }
}
