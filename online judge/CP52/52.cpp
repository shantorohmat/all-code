#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin>> t;

    while(t--)
    {
        char s[50],p[50];

       cin >>s >> p;


       int len = strlen(p);

       int count = 0;

       for(int i = 0;i < strlen(s);i++)
       {

               if(p[0] == s[i] && p[1] == s[i+1] )
               {
                   if(p[len -1] == s[i+(len-1)] && p[len - 2] == s[i+(len-2)])
                   {
                      count++;
                   }
              }
       }
       cout << count << endl;

    }
    return 0;
}

