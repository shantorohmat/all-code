#include <iostream>///n log n - Time complxity
using namespace std;
int gcd(int a,int b)
{

    if (a == 0)
        return b;
    return gcd(b % a, a);

}
int main()
{
    int n,c = 0;
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        if(gcd(i,n) ==  1)
            c++;

    }
    cout << c << endl;

}
