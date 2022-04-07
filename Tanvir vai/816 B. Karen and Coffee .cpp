#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define ll long long int
ll arr[1000000],brr[1000000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k, q, x, y, z, maxA = 0, maxB, minA = 0, l, r, i , j, t ;

    cin >> n >> r >> q;

    memset(arr,0,sizeof(arr));

    while(n--)
    {
        cin >> x >> y;


        arr[x]++; //= arr[x] + 1;
        arr[y+1]--;// = arr[y+1] -1;

        z =   max(x,y);


        //w =   min(x,y);

       // minA =

       /* if(w < minA)
        {
            minA = w
        }*/

        if(z > maxA)
        {
            maxA = z;
        }
    }
    for(i = 1 ;i <= maxA;i++)
    {
            arr[i] = arr[i-1] + arr[i];
            if(arr[i] >= r)
           cout << "<" <<  arr[i] << ">" << "  " << i << " ";
    }
    cout << endl;

    for(i = 1 ,j = 0;i <= maxA;i++,j++)
    {
        //cout << "(" << arr[i] << ")"<< " ";
            if(arr[i] >= r)
            {
                cout << arr[i] << " " << i << " ";
                brr[j] = 1;

               // cout << endl;
                //cout << "[" << brr[j] << "]"<< " ";
            }
            else brr[j] = 0;
    }

    cout << endl;

   for(i = 1 ;i <= maxA;i++)
    {
        cout << brr[i] << " " << i << " " ;
            brr[i] = brr[i-1] + brr[i];
         //if(brr[i] != 0)

    }
    cout << endl;

    while(q--)
    {
        cin >> l >> r;

        t = brr[r] - brr[l-1];


        cout<< r << " - "  << l-1<< " = "<< t << endl;
    }


}
