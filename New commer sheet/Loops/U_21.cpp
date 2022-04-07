#include <iostream>
using namespace std;

int main()
{
    int n,a,b,j,l = 0;

    cin >> n >> a>> b;

    for(int i = 1;i <= n;i++)
    {
        int h = i;

        int sum = 0;

        while(h > 0)
        {

        j = h % 10 ;

        sum = sum + j;

        h = h / 10;

        }

        if(sum >= a && sum <= b)
        {

            l = i + l;
        }

    }

    cout << l << endl;

    return 0;
}
