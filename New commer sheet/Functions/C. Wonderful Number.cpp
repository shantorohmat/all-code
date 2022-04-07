#include <iostream>
using namespace std;

int bin(int a)
{
    int s[100],count = 0;

    int i = 0;

    while(a != 0)
    {
        s[i] = a % 2;

        a = a / 2;
        i++;
    }

    for(int j = i -1,k = 0; j >= 0;j--,k++)
        if(s[j] != s[k])
        {
            count = 1;
        }

        if(count == 0) return 1;
        else return 0;

}

int odd(int n)
{
    if(n % 2 == 1)
    {
        return 1;
    }
    else return 0;
}

int main()
{
    int n;

    cin>> n;

    int x = bin(n);

    int y = odd(n);

    if(x == 1 && y == 1){

    if(x == y) cout << "YES" << endl;

    else cout << "NO" << endl;
    }
    else cout << "NO" << endl;



    return 0;
}
