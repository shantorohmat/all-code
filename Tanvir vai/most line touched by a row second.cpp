#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

#define maxSize 10007
int main()
{
    int n,arr[maxSize],maxi = 0,M,maxa = 0,index = 0 ;

    cin >> n;

    memset(arr,0,sizeof(arr));

    cout << "Give a value of x and y : "<< endl;

    for(int i = 1;i <= n;i++)
    {
        int x,y;

        cin >> x >> y;

        int z = max(x,y);
        if(maxi < z)
        {
            maxi =z;
        }

        arr[x]++;
        arr[y+1]--;
    }

    for(int i = 1;i <= maxi;i++)
    {
        arr[i] = arr[i-1] + arr[i];


        if(maxa < arr[i])
        {
            maxa = arr[i];
            index = i;
        }
    }
    cout << "Maximum number : " << maxa << endl ;
    cout<<  "The index of maximum number : " << index <<   endl;



}

