#include <iostream>
using namespace std;
int main()
{
     int n,k;
     cin >> n >> k;
     int arr[1007];

     for(int i = 0;i <= (2*n) ;i++)
     {
         cin >> arr[i];
     }

     //for(int i = 1;i <= (2*n);i+=2){
     for(int i = (2*n);i > 0;i-=2){



         if(k > 0 && arr[i-1] +1< arr[i] && arr[i] > arr[i+1]+1 )
         {
             cout << arr[i] << endl;
             arr[i] = arr[i] - 1;
             k--;
         }


     } cout << endl;
     //cout << arr[0] << " ";
      for(int i = 0;i <= (2*n) ;i++)
     {
         cout <<  arr[i] << " ";
     }
}
