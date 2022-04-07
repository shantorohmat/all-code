
#include <iostream>
using namespace std;
#define ll long long int
int main()
{
   ll n;
   cin >> n;
   string s;

   ll d = n % 10;
   ll i = 0;
   while(d)
   {
       n = n / 10;

       s[i] = 9 - d;
       i++;

       d = n % 10;
   }
   cout << s << endl;
}
