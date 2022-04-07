#include <iostream>
using namespace std;

int main()
{
    int n;
    long long int m;

    cin >> n;

    long long int *p = new long long int [n];

    for(int i = 0;i < n;i++)
    {
        cin >> p[i];
    }

    for(int j = 0;j < n;j++)
    {
        for(int i = 0;i < n - 1 - j;i++)
        {
            if(p[i] > p[i+1])
            {
                int temp = p[i];
                p[i] = p[i+1];
                p[i+1] = temp;;
            }
        }
    }


    /*for(int i = 0;i < n;i++)
    {
        if(p[i] % 2 != 0)
        {
            m = p[i];
            break;
        }
    }*/

    int count = 0;

    for(int i = 0;i < n;i++)
    {
        if(p[0] == p[i])
        {
            count++;
        }
    }
    if(count % 2 != 0)
    {
        cout << "Lucky" << endl;
    }
    else
        cout << "Unlucky" <<endl;
    return 0;
}
