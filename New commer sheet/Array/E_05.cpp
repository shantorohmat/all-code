#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int *p = new int[n];

    for(int i = 0;i < n;i++)
    {
        cin >> p[i];
    }

    int low = p[0];
    int count  ;

    for(int i = 0;i < n ;i++)
    {


        if (low >=  p[i])
        {
            low = p[i];


        }
    }

    for(int i = 0;i < n ;i++)
    {


        if (low >=  p[i])
        {
            count = i;
            break;

        }
    }

    count++;

    cout<< low << " " << count << endl;

    return  0;
}
