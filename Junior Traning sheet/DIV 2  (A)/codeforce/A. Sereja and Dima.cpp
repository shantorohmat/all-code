#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
   int n,a;
   cin >> n;
   vector <int>arr;
   for(int i = 0;i < n;i++)
    {
        cin >> a;
        arr.push_back(a);
    }
       int l = 0;
       int h = n - 1;

       int x = 0,y = 0;

       int i = l,j = h;
        while(i < j)
       {
           if(arr[i] > arr[j])
           {
               x += arr[i];
               i++;
            }
           else{
                    x += arr[j];
                    j--;
               }

        if(arr[i] > arr[j])
           {
               y += arr[i];
               i++;
            }
        else{
                    y += arr[j];
                    j--;
            }



       }
       if(i == j && n % 2 == 1) x += arr[i];
       cout << x << " " << y << endl;

        return 0;


}
