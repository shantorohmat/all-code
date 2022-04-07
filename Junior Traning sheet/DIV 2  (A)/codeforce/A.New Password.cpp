#include <iostream>
using namespace std;
int main()
{
    int n,k,x,m = 1;
    cin >> n >> k;
    char a;
    m = x = n / k;
    //cout << x << endl;
    while(x--){
    for(int i = 1;i <= k;i++)
    {
        a = 'a' + i -1;
        cout << a;
    }
    //cout << endl << x << endl;



    }
    int y = m * k;
    //cout << y << endl;
    x = n - y;

    for(int i = 1;i <= x;i++)
    {
         a = 'a' + i -1;
        cout << a;
    }
}
