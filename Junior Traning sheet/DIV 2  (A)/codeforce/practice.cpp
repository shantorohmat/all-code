#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int *p = new int [n];

    for(int i = 0;i < n;i++)
    {
        cin >> p[i];
    }



    for(int j = 0;j < n ;j++)
    {
        for(int i = 0;i < n-1-j;i++)
        {

        if(p[i] > p[i+1])
        {
            int temp;

            temp = p[i];
            p[i] = p[i+1];
            p[i+1] = temp;
        }
        //cout << p[i] << " ";
        }

        cout << p[j] << " ";

    }
    //cout << endl;
    /*for(int i = 0;i < n;i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;*/

    return 0;
}
