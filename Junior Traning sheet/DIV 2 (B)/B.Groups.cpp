#include <iostream>
#include <vector>
#define ll long long int
using namespace std;
int main()
{
    
    ll t;
    cin >> t;
    while(t--){
    ll n;
    cin >> n;
    ll arr[n+1][5+1];
    for(ll i = 0;i < n;i++)
    {
        for(ll j = 0;j < 5;j++)
        {
            ll a;
            cin >> a;
            arr[i][j] = a;
           // *(arr + i * n + j) = a;
          
        }
    }

    ll m = 0,k = 0;
    for(ll i = 0;i < 5;i++)
    {
        k = 0;
        for(ll j = 0;j < n;j++)
        {
            
            // cout << *(arr+j*n+i) << " ";
            if(arr[j][i])
            {
                k++;
                //cout << k << " ";
                arr[i][j] = 0;
            } 
            
        }
        //cout << endl;
        if(k >= (n/2))
        {
            
            m++;
            //cout << "M : " << m << endl;
        }
    }

        
        
    
   if(m == 2) cout << "YES" << endl;
   else cout << "NO" << endl;
    }

}