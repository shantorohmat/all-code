#include <iostream>
#define ll long long int
using namespace std;
ll arr[1000000];
ll j = 0;

bool fun(ll i)
{
    if(i == 0) return true;
    if(arr[i] != arr[j]) return false;
    j++;
    fun(i-1);


}

int main()
{
    int n,i;
    cin >> n;
    for(i = 0;i < n;i++)
    {
        cin >> arr[i];
    }

    if(fun(i-1) == 1) cout <<"YES" << endl ;
    else cout << "NO" << endl;


}
