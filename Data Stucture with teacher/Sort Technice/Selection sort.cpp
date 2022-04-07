#include <iostream>
using namespace std;
 void Selection(int A[],int n)
 {
     int i,j,k;

     for( i = 0;i < n -1;i++)
     {
         for(j = k = i;j < n;j++ )
         {
             if(A[j] < A[k])
                k =j;
         }
         swap(A[i],A[k]);
     }
 }

 int main()
 {

   cout << " Enter You array size  : " ;
   int n; cin >> n;

   int *A = new int[n];
   for(int i = 0;i < n;i++)
    cin >> A[i];

    Selection(A,n);

   for(int i = 0;i < n;i++)
   {
       cout << A[i] << " ";
   }
 }
