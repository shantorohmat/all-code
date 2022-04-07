#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,q,arr[10001];

    cin >> n >> q;

    for(int i = 0;i < n;i++)
    {
        cin >> arr[i];

    }
    n = n-1;
    sort(arr,arr+n);
    while(q--)
    {
        int a;
        cin >> a;

        int ff = 0,ss = n-1,f = 0;

         while(1)
        {
            int mid = (ff+ss)/2;
            if(arr[mid] == a)
            {
                f = 1;
                break;

            }
            if(arr[mid]> a)
            {
                ff = mid+1;

            }
            else if(arr[mid] < a)
            {
                ss = mid-1;
            }

        }
        if(f == 1)
            cout << "found" << endl;
        else cout << "not found" << endl;
    }

}
