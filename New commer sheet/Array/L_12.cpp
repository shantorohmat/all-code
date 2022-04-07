#include <iostream>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {

    int n;

    cin>> n;

    int *p = new int [n];

    for(int i = 0;i < n;i++)
    {
        cin >> p[i];
    }

    int ler;

    for(int i = 0;i < n;i++)
    {
        for(int j = i;j < n;j++)
        {
            for(int k = i;k <= j;k++)
            {
                cout << p[k] << " " ;

                if(k == i){

                 ler = p[i];
                }


                if(ler <= p[k])
                {
                    ler = p[k];

                }

            }

            cout <<":"<<  ler << " " ;
            cout << endl;

        }

    }
     cout << endl;
    }

    return 0;
}
