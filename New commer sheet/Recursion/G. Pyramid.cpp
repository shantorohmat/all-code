#include <iostream>
using namespace std;
void rec(int n,int k)
{
    if(n > 0)
    {
        //static j = k;
        for(int i = n-1;i > 0;i--)
            cout << " ";
        for(int i = 0;i < k;i++)
                cout << "*";

            cout << endl;

        n--;
        rec(n,k+2);


    }
}
int main()
{
    int n;
    cin >> n;

    rec(n,1);
}
