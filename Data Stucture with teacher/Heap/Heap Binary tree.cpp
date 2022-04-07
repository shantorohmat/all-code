#include <iostream>
using namespace std;
void insert(int A[],int n)
{
    int temp,i = n;

    temp = A[i];

    while(i > 1 && temp > A[i/2])
    {
        A[i] = A[i/2];
        i = i / 2;

    }
    A[i] = temp;
}
int   Delete(int A[],int n)
{
    int x,i,j;
    int val = A[1];

    x = A[n];

    A[1] = A[n];

    i = 1,j = 2 * i;

    while(j < n - 1)
    {
        if(A[j+1] > A[j])
            j = j + 1;
        if(A[i] < A[j]){
            swap(A[i],A[j]);
        i = j;
        j =  2 * j;
        }
        else break;

    }
    // A[n] = x;
    return val;
}

int main()
{
     int A[] = {0,10,20,30,25,6,9,5};

    int i;

    for(i = 1;i < 7;i++)
    {
        insert(A,i);
    }

    for(int i = 1;i < 7;i++)
        cout << A[i] << " ";

   cout << endl << " delete : " << Delete(A,4) << endl;

    for(int i = 1;i < 7;i++)
        cout << A[i] << " ";
}
