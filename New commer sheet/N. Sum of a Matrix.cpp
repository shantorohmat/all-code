#include <iostream>
#define ll long long int
using namespace std;
ll A[101][101],B[101][101],r,c;

ll fun(int i,int j)
{
   return A[i][j] + B[i][j];
   //fun(i+1,j+1);
   if(i < r - 1)
   {

   }
   if(j < c-1)
   {

   }
}
int main()
{

    cin >> r >> c;

    for(int i = 0;i < r;i++)
    {
        for(int j = 0;j < c;j++)
            cin >> A[i][j];
    }

     for(int i = 0;i < r;i++)
    {
        for(int j = 0;j < c;j++)
            cin >> B[i][j] ;

    }

     for(int i = 0;i < r;i++)
    {
        for(int j = 0;j < c;j++)
            cout << fun(i,j)  << " ";
            cout << endl;

    }



//
//     for(int i = 0;i < r;i++)
//    {
//        for(int j = 0;j < c;j++)
//            cout << A[i][j] + B[i][j] << " ";
//
//            cout << endl;
//    }
}
