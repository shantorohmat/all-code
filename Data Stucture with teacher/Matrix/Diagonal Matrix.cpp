#include <iostream>
using namespace std;

void set(int A[],int i,int j,int x)
{
    if(i == j)
    {
        A[i-1] = x;
    }
}

int get(int A[],int i,int j)
{
    if(i == j)
        return A[i-1];

    else return 0;
}

int main()
{
    int m,n[10];

    cout << "enter mxm matrices : ";

    cin >> m;

    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < m;j++)
        {
            if(i == j)
            set(n,i,j,3+i);
        }
    }

    cout << m<<"x"<<m << " matrix : " << endl;
     for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < m;j++)
        {

            cout << get(n,i,j) << " ";
        }
        cout << endl;
    }
    cout << " OWW It's a diagonal matrix."<< endl;
    cout << "You made it " << endl;



}
