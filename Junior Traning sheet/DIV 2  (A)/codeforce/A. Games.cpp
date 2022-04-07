#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x,y;
    int arr[33],brr[33];
    map<int,int>mp;

    for(int i = 0;i < n;i++)
    {
        cin >> x >> y;
       arr[i] = x;
       brr[i] = y;
    }
    int l = 0,k = 0;

    for(int i = 0;i < n;i++)
    {
        k = arr[i];
        for(int j = 0 ;j < n;j++)
        {
            if(k == brr[j])
                l++;
        }

    }
    cout << l << endl;

}
