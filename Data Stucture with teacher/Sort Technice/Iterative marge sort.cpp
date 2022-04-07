#include <iostream>
using namespace std;



void Merge(int A[],int l,int mid,int h)
{
    int i=l,j=mid+1,k=l;
    int B[100];

    while(i<=mid && j<=h)
    {

     if(A[i]<A[j])
     B[k++]=A[i++];

     else
     B[k++]=A[j++];

    }

   for(;i<=mid;i++)
   B[k++]=A[i];

   for(;j<=h;j++)
   B[k++]=A[j];

   for(i=l;i<=h;i++)
   A[i]=B[i];
}


void IterativeMerge(int A[],int n)
{
    int p,i,l,mid,h;

    for(p = 2;p <= n;p = p * 2)
    {
        for(i = 0;i + p -1 < n;i= i + p)
        {
            l = i;
            h = i + p - 1;
            mid = (l+h)/2;

            Merge(A,l,mid,h);
        }

    }
    if(p / 2 < n)
        Merge(A,0,p/2-1,n);
}

int main()
{
      cout << " Enter You array size  : " ;
   int n; cin >> n;

   int *A = new int[n];
   cout << "Enter "<< n << " Number : " ;

   for(int i = 0;i < n;i++)
    cin >> A[i];

    IterativeMerge(A,n);

   for(int i = 0;i < n;i++)
   {
       cout << A[i] << " ";
   }

}
