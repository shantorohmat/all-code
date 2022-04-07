#include <iostream>
using namespace std;
int ETU(int n)
{
    int res = n;
    for(int i = 2;i*i <= n;i++)
    {
        if(n%i == 0){
        res =res / i;
        res =res * (i-1);
        cout << i << endl;

            while(n%i == 0)
            {
                n=n/i;

            }
        }

    }
    if(n>1)
    {
        res=res/n;
        res=res * (n-1);
    }
    return res;
}
int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << ETU(n) << endl;
    }

}
