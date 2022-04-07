#include<stdio.h>
#include <iostream>
#include<math.h>
using namespace std;


int X[100];
int n;

void printing()
{
    for(int l=1; l<=n; l++)
        cout << X[l] << " " ;
        cout << endl;
}
int Place(int k,int i)
{
    int j;
    for(j=1; j<=k-1; j++)
        if((X[j] == i) || ((abs(X[j]-i) == abs(j-k))))
            return 0;

 return 1;
}
void NQueen(int k, int n)
{
    int i,l;
    for(i=1; i<=n; i++)
    {
        if(Place(k,i))
        {
            X[k]=i;

            NQueen(k+1,n);
        }

    }
}
int main()
{
    int j ;
    cout << "Please Enter How Many Queen do you want to place? " << endl;;
    cin >> n;
    NQueen(1,n);
    printing();
    return 0;
}


