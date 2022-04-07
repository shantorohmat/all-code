
#include <iostream>
using namespace std;
void rec(int n,int k)
{
    if(n > 0)
    {
        //static j = k;

        n--;
        rec(n,k+2);
         for(int i = n;i > 0;i--)
            cout << " ";
        for(int i = 0;i < k;i++)
                cout << "*";

            cout << endl;



    }
}
int main()
{
    int n;
    cin >> n;

    rec(n,1);
}
