#include <iostream>
using namespace std;

void Insertion(int A[],int n)
{
    int i,j ,x;
    for(int i = 1;i < n;i++){

     j = i - 1;

     x = A[i];

    while(j > -1 && A[j] > x)
    {
        A[j + 1] = A[j];
        j--;
    }
    A[j+1] =  x;
    }
}

int main()
{

   cout << " Enter You array size  : " ;
   int n; cin >> n;
   int *A = new int[n];
   for(int i = 0;i < n;i++)
    cin >> A[i];
    Insertion(A,n);

   for(int i = 0;i < n;i++)
   {
       cout << A[i] << " ";
   }
}
