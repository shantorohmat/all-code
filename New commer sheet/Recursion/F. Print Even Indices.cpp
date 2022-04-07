#include <iostream>
using namespace std;
//int arr[100000];
void rec(int arr[],int n)
{
      if(n > -1){
      if(n%2 == 0)
      {
          cout << arr[n] << " ";
      }
      n--;
      rec(arr,n);
      }



}
int main()
{
    int n;

    cin >> n;
    int *arr = new int[n];
    for(int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    n--;
    rec(arr,n);
}
