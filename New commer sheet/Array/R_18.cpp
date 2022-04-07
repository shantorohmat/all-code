#include <iostream>
using namespace std;
int main()
{
    long long int p[1000],s[1000],x = 0,count = 0,n;

    cin >> n ;

    for(int i = 0 ;i < n;i++)
    {
        cin >> p[i];
    }

    for(int j = 0;j < n;j++)
    {
        cin >> s[j];
    }


   for(int j = 0;j < n;j++)
   {
       for(int i = 0;i  < n-j-1;i++)
       {
           if(p[i] > p[i+1])
           {
               int temp = p[i];
               p[i] = p[i+1];
               p[i+1] = temp;

           }
       }
   }

   for(int j = 0;j < n;j++)
   {
       for(int i = 0;i  < n-j-1;i++)
       {
           if(s[i] > s[i+1])
           {
               int temp = s[i];
               s[i] = s[i+1];
               s[i+1] = temp;

           }
       }
   }



    for(int i = 0;i < n;i++)
    {
        if(p[i] == s[i])
        {
            count++;
        }
    }


    if(count == n) cout << "yes" << endl;

    else cout << "no" << endl;


    return 0;


}

