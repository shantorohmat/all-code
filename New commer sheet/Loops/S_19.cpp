#include <iostream>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int n,m,s,l,sum = 0;

        cin >> n>> m;

        if(n > m) {s = m;l = n;}

        else  {s = n; l = m;}

        for(int i = s + 1 ;i < l;i++)
        {
            if(i % 2 != 0)
            {
                sum = sum + i;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
