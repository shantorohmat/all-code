#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    double *arr = new double[n];
//    for(int i = 0;i < n;i++)
//    {
//        cin >> arr[i];
//
//    }
    //int *a = 10;

   cout << (*arr) << endl;
   cout << *(arr++) << endl;
   int a  = 2 & 4;

  cout << a;

}
