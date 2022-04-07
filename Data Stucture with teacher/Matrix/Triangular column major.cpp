#include <iostream>
using namespace std;
void set(int A[],int i,int j,int x,int m)
{
    if(i >= j)
    {
        A[m*(j-1) - ((j-2)*(j-1))/2 + (i-j)] = x;
    }
}

int get(int A[],int i,int j,int m)
{
    if(i>= j)
        return  A[m*(j-1) - (j-2)*(j-1)/2 + (i-j)];
    else return 0;
}
int main()
{
    cout << "mxm matrix : " << endl;

    int m;cin >> m;

    int n[100];

    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < m;j++)
        {
            set(n,i,j,5+j+i,m);
        }
    }

    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < m;j++)
        {
            cout << get(n,i,j,m) << "  ";
        }
        cout << endl;
    }
}
