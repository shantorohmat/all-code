#include <iostream>
#include <cmath>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll *a = new ll[n];
    ll *b = new ll[n];

    for(int i = 0;i < n;i++)
    {
        cin >> a[i];

    }

    bool c = false;
    for(int i = 0;i < n;i++)
    {
        if(a[i] % 2 == 0)
        {
           b[i] = a[i]/2;
           cout << b[i] << endl;
        }
        else {
            if(c)
            {
               b[i] = floor(a[i]/2.0f);
                c = !c;
                cout << b[i] << endl;
            }
            else {
                    b[i] = ceil(a[i]/2.0f);
                    c = !c;
                    cout << b[i] << endl;
            }
        }
    }
//    for(int i = 0;i < n;i++)
//    {
//        cout << b[i] << endl;
//
//    }
}
