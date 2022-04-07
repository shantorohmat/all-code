#include <iostream>
using namespace std;
#define size 1000
int main()
{
    int n,sum = 0,sum1 = 0,res,result ;

    cin >> n;

    int (*p)[size] = new int [size][size];

    //int p[size][size];

    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            cin >> p[i][j];
        }
    }

    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j <= i;j++)
        {
            if(i == j)
            {
                sum = sum + p[i][j];
            }

        }
    }

    ///cout << sum << endl;

    for(int i = 0;i < n;i++)
    {
        for(int j = n-1-i;j >= 0;j--)
        {

                sum1 = sum1 + p[i][j];
                break;


        }
    }
    ///cout << sum1 << endl;

    result = sum - sum1;

    if(result < 0)
    {
        res = (-1) * result;
    }
    else res = result;

    cout << res << endl;

    return 0;

}
