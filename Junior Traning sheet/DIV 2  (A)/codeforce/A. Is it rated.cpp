#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr = new int [n+9];
    int *brr = new int [n+9];

    for(int i = 0;i < n;i++)
    {
        cin >> arr[i] >> brr[i];


    }
    for(int i = 0;i < n;i++)
    {


        if(arr[i] != brr[i])
        {
            cout << "rated" << endl;
            return 0 ;
        }

    }

    for(int i = 1;i < n;i++)
    {



        if(arr[i] > arr[i-1]){
            cout << "unrated" << endl;
            return 0;
        }

    }
    cout << "maybe" << endl;



}
