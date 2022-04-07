#include <iostream>
using namespace std;
    int n,k;
int fun(int n)
{
    if(n>=k)
    {
        if(n ==k)
        return 1;
        else return 0;
    }
    int a  = 0;
     a = a + fun(n+1);
     a = a + fun(n+2);
     a = a+  fun(n+3);
     return a;

}
int main()
{

    cin >> n >> k;
    cout << fun(n) << endl;
}
