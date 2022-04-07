#include <iostream>
using namespace std;
int Linear(int arr[],int n,int x)
{
    for(int i = 0;i < n;i++)
        if(arr[i] == x)
    {
        return i;
    }
}
int TransPosition(int arr[],int n,int val)
{
    for(int i = 0;i < n;i++)
    {
        if(arr[i] == val)
        {
            swap(arr[i-1],arr[i]);
            return i-1;

        }
    }

}
int MovetoFront(int arr[],int n,int x)
{

    for(int i =0;i < n;i++)
    {
        if(arr[i] == x)
        {
            swap(arr[0],arr[i]);
            return 0;
        }
    }
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
    int n = sizeof(arr)/sizeof(arr[0]);
    //int index = TransPosition(arr,n,s);
    int index = MovetoFront(arr,n,s);

    //int index = Linear(arr,n,s);
    cout << "value of index : " << index << endl;
    for(int i = 0;i < n;i++) cout  <<  arr[i] << " ";
    cout << endl;



}
