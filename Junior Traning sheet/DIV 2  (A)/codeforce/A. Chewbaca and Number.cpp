#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long int
int main()
{
   ll n;
   cin >> n;
   vector<ll>v;

   ll d = n % 10;
   ll i = 0;
   while(n)
   {
       n = n / 10;
       //cout << d << endl;
       if(9-d == 0 || d == 0) v.push_back(0);

       else if(d> 9-d && 9-d > 0)
        v.push_back(9-d);
       else v.push_back(d);


       d = n % 10;
   }
   reverse(v.begin(),v.end());
   if(v[0] == 0) v[0] = 9;
   for(auto x : v) cout << x  ;
}
