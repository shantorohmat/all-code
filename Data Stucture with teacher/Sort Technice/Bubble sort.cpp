#include <iostream>
using namespace std;

void Bubble(int A[],int n)
{
    int flag = 0;

    for(int i = 0;i < n-1;i++)
    {
        flag = 0;
        for(int j = 0;j < n - 1 - i;j++)
        {
            if(A[j] > A[j+1])
            {
                swap(A[j],A[j+1]);
                flag = 1;
            }
        }
        if(flag == 0) break;
    }
}

int main()
{
   cout << " Enter You array size  : " ;
   int n; cin >> n;
   int *A = new int[n];
   for(int i = 0;i < n;i++)
    cin >> A[i];
    Bubble(A,n);

   for(int i = 0;i < n;i++)
   {
       cout << A[i] << " ";
   }
}
