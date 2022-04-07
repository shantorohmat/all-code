//#include <bits/stdc++.h>
#include <iostream>

using namespace std;


int fun(int n)
{
    if(n < 2) return 0;

    if(n == 2) return 1;

    if(n%2 == 0) {return 0;}



    if(n > 2)
    {
        for(int i= 3;i < n/2;i = i + 2)
        {
            if(n % i ==  0)
                return 0;
        }

        return 1;
    }
}

int main()
{
    int n,m,x;

    cin >> n>> m;

    for(int i = n+1;;i++)
    {
        if(fun(i))
        {
           // cout << i<< endl;
            x = i;
            break;
        }
    }
    if(x != m) cout << "NO" << endl;
    else cout << "YES" << endl;



}

