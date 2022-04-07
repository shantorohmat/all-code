#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
   int n;

   cin >> n;

   vector <char>v(n);

   vector <char>:: iterator it;

   for(int i = 0;i < n;i++)
   {
       cin >> v[i];
   }

   sort(v.begin(),v.end());

   for(it =v.begin();it != v.end() ;it++)
   {
       cout << *it;
   }

   return 0;
}
