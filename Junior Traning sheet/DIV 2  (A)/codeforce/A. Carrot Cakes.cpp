#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,t,k,d;

    cin >> n >> t >> k >> d;

    int x = t+d;
    //cout << x << endl;
    int  y = t * ((n+k-1)/k) ;
    //cout << y << endl;

     if(x < y ) cout << "YES" << endl;

     else cout << "NO" << endl;
}
