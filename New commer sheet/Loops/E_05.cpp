#include <iostream>
using namespace std;

int main()
{
    int t;

    cin >> t;

    int *p = new int [t];

    for(int i = 0;i < t;i++)
    {
        cin >> p[i];
    }
    for(int i = 0;i < (t-1);i++)
    {
        if(p[i] > p[i+1])
        {
            int temp;

            temp = p[i];
            p[i] =p[i+1];
            p[i+1] = temp;

            cout << p[i] << " : " << p[i+1]<<endl;


        }
    }
    cout << p[t-1] << endl;

    return 0;

}
/// 26 10 21 87 10 25 78 96 36 54


