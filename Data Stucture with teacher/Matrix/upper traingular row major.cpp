#include<iostream>
using namespace std;

void set(int A[],int i,int j,int x,int m)
{
    if(i <= j)
    {
        A[m*(i-1) - ((i-2)*(i-1))/2 + (j-i)]  = x;
    }
}

int get(int A[],int i,int j,int m)
{
    if(i <= j)
    {
        return A[m*(i-1) - ((i-2)*(i-1))/2 + (j-i)];
    }
    else return 0;
}
int main()
{
    cout << "Enter mxm matrix : ";

    int m,n[100];cin >> m;

    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < m;j++)
        {
            if(i <= j)
            {
                set(n,i,j,1+i+j,m);
            }
        }
    }

    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < m;j++)
        {

                cout << get(n,i,j,m) << " ";



        }
        cout <<endl;
    }
}
