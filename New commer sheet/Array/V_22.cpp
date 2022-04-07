#include <iostream>
using namespace std;

int main()
{
     int n,m,count[100000],a;

     cin >> n >> m;

     for(int i = 1;i <= m;i++) count[i] = 0;

     int *p  = new int [n];

     for(int i = 0;i < n;i++)
     {
         cin >> a;
         count[a]++;
     }



     for(int i = 1;i <= m;i++)
     {
         cout << count[i] << endl;
     }

     return 0;


}

