#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int BinSearch(int arr[],int n,int x,int l,int h)
{
    int mid;
     while(l <= h)
    {
        mid = floor((l+h)/2);

         if(arr[mid] == x)
        {
            return mid;

        }

        else if(arr[mid] > x )///24>10
        {

            h = mid -1;
        }
        else ///24 < 34
        {
            l = mid + 1;

        }
    }
}
int ReBinSearch(int arr[],int n,int x,int l,int h)
{
    int mid;
     if(l <= h)
    {
        mid = floor((l+h)/2);

         if(arr[mid] == x)
        {
            return mid;

        }

        else if(arr[mid] > x )///24>10
        {

            h = mid -1;
            return ReBinSearch(arr,n,x,l,h);
        }
        else ///24 < 34
        {
            l = mid + 1;
            return ReBinSearch(arr,n,x,l,h);

        }
    }
}
int main()
{
    int arr[] = {11,22,33,44,55,66,77,88,99};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    cout << n << endl;
    for(int i = 0;i < n;i++)
    {
        cout << arr[i] << " : " << i << endl;
    }
    for(int i = 0;i < n;i++)cout << arr[i] << " ";
    cout << endl;
    int l = 0,x;
    int h = n-1;
    //int mid ;
    while(1){
    cout << "enter the value : ";
    cin >> x;
    //cout << BinSearch(arr,n,x,l,h) << endl;
    cout << ReBinSearch(arr,n,x,l,h) << endl;
    }

}
