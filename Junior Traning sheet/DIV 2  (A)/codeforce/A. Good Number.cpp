#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    int n,k,l,c = 0,ans = 0;
    bool arr[10];

    for(cin >> n >> k;n--;)
    {
        c = 0;
         memset(arr,0,sizeof(arr));

        for(cin >> l ; l;l /= 10)
        {
            arr[l%10] = 1;
        }

        for(int i = 0;i <= k;i++)
        {
            if(arr[i] == 0) {c = 0;break;}
            else c = 1;
        }
        if(c == 1) ans++;
    }cout << ans << endl;
}
