#include <iostream>
#include <math.h>
using namespace std;
#define size 100000
int s[size];
int m[size];
int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int n,i = 0,r,count = 0,ans = 0;

        cin >> n;

        while(n != 0)
        {
            s[i] = n % 2;
             i++;
            n = n / 2;

        }

        int l = i;
        for(int j = l -1,k = 0;j >= 0;j--,k++)
        {
            m[k] = s[j];

        }


        for(int x = 0;x < i;x++)
        {

            if(m[x] == 1)
            {
                count++;
            }
        }

        for(int i = 0;i < count;i++)
        {
            ans = pow(2,i) + ans;
        }
        cout << ans << endl;
    }
    return 0;
}
