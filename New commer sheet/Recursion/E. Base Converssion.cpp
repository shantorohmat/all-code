
#include <iostream>
using namespace std;

void rec(int n)
{


     if(n > 0)
     {

         rec(n/2);
         cout << n%2 ;

     }



}
int main()
{
    int n,t;
    cin >> n;
    while(n--)
    {
        cin >> t;
        if(t ==0)cout << 0;
        else
        rec(t);
        cout << endl;

    }

}
