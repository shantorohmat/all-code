#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;
ll Max = INT_MIN;
int fun(ll arr[],ll n)
{

    if(n == -1) return Max;
    Max = max(Max,arr[n]);
    fun(arr,n-1);
}
int main()
{
   ll n;
   cin >>n;
   ll *arr = new ll[n];

   for(ll i = 0;i < n;i++)
   {
       cin >> arr[i];
   }
   cout << fun(arr,n-1) << endl;;

}
