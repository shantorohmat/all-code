#include <iostream>
#include <algorithm>
using namespace std;
#define maxSize 10007
int main()
{
    int n,arr[maxSize],maxi =0,M,maxa = 0,index = 0;

    cin >> n;

    for(int i = 1;i <maxSize;i++ )
        arr[i] = 0;

    cout << "Give a value of x and y : "<< endl;

    for(int i = 0;i < n;i++)
    {
        int x,y;

        cin >> x >> y;
        int z = max(x,y);
    if(maxi < z)
    {
        maxi =z;
    }

        arr[x] = arr[x] +  1;
        arr[y+1] = arr[y+1] - 1;
    }

    for(int i = 1;i <= maxi;i++)
    {
        arr[i] = arr[i-1] + arr[i];
        cout << arr[i] << " ";
    }
    for(int i = 1;i <= maxi;i++ )
    {
        M = max(arr[i],arr[i+1]);
        if(maxa < M)
    {
        maxa =M;
        index = i;
    }
    }

    cout << endl << "maximum number : "<< maxa << endl;
    for(int i = 0;i <= maxi;i++)
    {
        if(maxa == arr[i])
        {
            cout << "The index of maximum number : " <<  i << endl;
            break;
        }
    }


}
