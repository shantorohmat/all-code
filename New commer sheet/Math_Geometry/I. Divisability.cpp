#include <iostream>
using namespace std;
#define ll long long int

ll gcd(ll a,ll b){
 return b == 0 ? abs(a) : gcd(b,a%b);
}
 ll lcd(ll a,ll b){
 return a/ gcd(a,b) * b;
 }

 int main()
 {
     ll a,b,x,sum = 0;

     cin >> a >> b >> x;

     for(ll i = x;i <= b;i = i+x)
     {

         sum = sum + i;
         //cout << sum << " ";
     }
     cout <<  sum << endl;

 }
