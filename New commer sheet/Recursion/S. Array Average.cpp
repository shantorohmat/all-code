#include <iostream>
#include <iomanip>
using namespace std;
#define ll long long int
ll arr[107];
double sum = 0;

double fun(ll n)
{
    if(n == -1) return sum;
    sum = sum + arr[n];
    fun(n-1);
}
int main()
{
   ll n;
   cin >> n;
   for(int i = 0;i < n;i++) cin >> arr[i];



    cout << fixed << setprecision(6) << fun(n-1)/n << endl;
}
