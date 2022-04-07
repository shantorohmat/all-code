#include <iostream>
using namespace std;

int main()
{
    int first = 0,second = 1,count = 0,n,fibo;

    cin >> n;

    for(count = 0;count < n;count++)
    {
        if(count <= 1) {fibo = count ;}
        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
        }
        cout << fibo << " ";
    }
    return 0;

}
