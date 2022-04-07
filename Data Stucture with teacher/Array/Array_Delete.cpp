#include <iostream>
using namespace std;
void Delete(int arr[],int n,int index)
{
    for(int i = index;i < n-1;i++)
    {
        arr[i] = arr[i+1];
    }
    //arr[n-1] = 0;
    n--;
    for(int i = 0;i < n;i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[] = {4,5,6,8,10,52,25,100};
    int s,p;
    cout << "Size of  array : ";
    cout << sizeof(arr)/sizeof(arr[0]) << endl;
    cout << "Value of this array : ";
    for(int i = 0;i < sizeof(arr)/sizeof(arr[0]);i++)cout << arr[i] << " ";
    cout << endl;
    cout << "enter a index :";
    cin >> p;
    int n = sizeof(arr)/sizeof(arr[0]);
    Delete(arr,n,p);


}
