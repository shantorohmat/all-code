#include <iostream>
#include <string>
#include <cstring>
#include <string.h>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    int r,l;
    cin >> n;
   // char c[100];
    string c;
    //scanf(" %[^\n]",c);
    cin >> c;

    int val1 = 0,val2 = 0;

    for(int i = 0;i < n;i++)
    {
        if(c[i] == 'R')
        {
            val1 = 1;
        }
        if(c[i] == 'L')
        {
            val2 = 1;
        }
    }
    if(val1 == 1 && val2 == 1){
            int k = 0,m = 0;

   for(int i = 0;i < n;i++)
   {
       if(c[i] == 'R' && k == 0){
        r = i;
        k = 1;
       }
       if(c[i] == 'L'&& m == 0)
       {
           l = i;
           m = 1;
       }


   }
   r = r+1;// indexing 0 thaka tai 1 +
    }
    if(val1 == 1 && val2 == 0){

   r = c.find('R');

   for(int i = r;i < n;i++)
   {
       if(c[i] != 'R')
       {
           l = i;
           break;
       }
   }
   r = r+1;//indexing 0 thaka tai 1 +
   l = l+1;//indexing 0 thaka tai 1 +
    }
    if(val1 == 0 && val2 == 1){


   int r = c.find('L');



   for(int i = r;i < n;i++)
   {
       if(c[i] != 'L')
       {
           l = i;
           break;
       }
   }

   r = r ;//indexing 0 thaka tai  r + 1 - 1 = r tai r
   l = l ;
   cout << l << " " << r<< endl;
   return 0;
    }
    cout << r << " " << l << endl;



}
