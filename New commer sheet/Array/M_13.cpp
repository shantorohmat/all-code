#include <iostream>
using namespace std;

int main()
{


    long long int n,i,temp;

    cin >> n;

    long long int *p = new long long int [n];

    for(i = 0;i < n;i++)
    {
        cin >> p[i];
    }
    long long int ler = p[0];

    long long int sml = p[0];
    for(i = 1;i < n;i++)
    {
        if(ler < p[i])
        {
            ler = p[i];
        }
        if(sml > p[i])
        {
            sml = p[i];

        }
    }



    long long int countsml ,countler;


    for(i = 0;i < n;i++)
    {
        if(ler == p[i])
        {
            countler = i;
        }
        if(sml == p[i])
        {
            countsml = i;
        }
    }



         temp = p[countler];
         p[countler] = p[countsml];
         p[countsml] = temp;




    for( i = 0;i < n;i++)
    {

         cout << p[i] << " ";
    }
    cout << endl;


    return 0;
}

