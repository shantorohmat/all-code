#include <iostream>
#include <string.h>
using namespace std;
int main()
{

    cout << "How many string do you want as input : " ;
    int n;
    scanf("%d ",&n);
    while(n--)
    {
        int i = 0,j = 0;
        string s,b;
        getline (cin,s);
       for( i = 0;s[i]!= '\0';i++)
       {


       }
       i = i - 1;

       for( j =0;i >= 0;i--,j++)
       {
           b[j] = s[i];
             cout << b[j];
       }
       b[j] = '\0' ;
       cout << endl;


    }
}
