#include <iostream>
using namespace std;

void Merge(int A[],int n,int B[],int m,int C[],int l)
{
    int i,j,k;

    i = j = k = 0;

    while(m > i && n > j)
    {
        if(A[i] < B[j])
        {
            C[k++] = A[i++];
        }
        else{
            C[k++] = B[j++];
        }

    }
    for(;i < m;i++)
        C[k++] = A[i];
    for(;j < n;j++)
        C[k++] = B[j];
}
int main()
{

   cout << " Enter You array size  : " ;
   int n; cin >> n;
   int *A = new int[n];
   cout << "Enter first sorted List : " ;
   for(int i = 0;i < n;i++)
    cin >> A[i];


    cout << "Enter You array size  : " ;
   int m; cin >> m;
   int *B = new int[m];
   cout << "Enter second sorted List : " ;
   for(int i = 0;i < m;i++)
    cin >> B[i];


    int C[m+n];
    for(int i = 0;i < m;i++)
    C[i] = 0;



    Merge(A,n,B,m,C,m+n);



   for(int i = 0;i < n+m;i++)
   {
       cout << C[i] << " ";
   }


}
