#include <iostream>
using namespace std;
void Insert(int arr[],int n,int val,int index)
{
    for(int i = n;i > index;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[index] = val;
}
void Append(int arr[],int n,int x)
{

    arr[n++] = x;
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
    cout << " enter a value :";
    cin >> s;
    cout << "enter a index :";
    cin >> p;
    int n = sizeof(arr)/sizeof(arr[0]);
    Insert(arr,n,s,p);
    //Append(arr,n,5680);
    for(int i = 0;i <= n;i++)
        cout << arr[i] << " ";
    cout << endl;

}
