#include <iostream>
using namespace std;

void set(int A[],int i,int j,int x)
{
    if(i >= j)
    {
        A[(i*(i-1))/2 + (j - i)] = x;
    }
}

int get(int A[],int i,int j)
{
    if(i>= j)
        return  A[(i*(i-1))/2 + (j - i)];
    else return 0;
}
int main()
{
    cout << "mxm matrix : " << endl;

    int m;cin >> m;

    int n[10];

    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < m;j++)
        {
            set(n,i,j,5+j+i);
        }
    }

    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < m;j++)
        {
            cout << get(n,i,j) << " ";
        }
        cout << endl;
    }
}
