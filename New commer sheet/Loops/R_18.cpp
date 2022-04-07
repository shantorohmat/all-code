#include <iostream>
using namespace std;

int main()
{
    while(1)
    {
        int n,m,s,l,sum = 0;

        cin >> n >> m;

        if(n <= 0 || m <=  0) { break;}

        if(n < m) { s = n; l = m;}

        else { s = m;l = n; }

        for(int i = s;i <= l;i++)
        {
            cout << i << ' ';
            sum = sum + i;

        }
        cout << "sum =" << sum ;
        cout <<endl;
    }
    return 0;
}
