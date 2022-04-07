#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <stdio.h>
#define ll long long int
using namespace std;
vector<string>v[200000];
int main()
{
   ll n,sum = 0;
   cin >> n;


   for(int i = 0;i < n;i++)
   {
       char s[100];
       scanf(" %[^\n]",s);

       v[i].push_back(s);


   }

   for(int i = 0;i < n;i++)
   {
       string s = v[i][0];
       //cout << s << endl;

       if(s == "Icosahedron") sum += 20;
       else if(s == "Cube" ) sum += 6;
       else if(s == "Tetrahedron") sum += 4;
       else if(s == "Dodecahedron") sum += 12;
       else if(s == "Octahedron") sum += 8;
   }

   cout << sum << endl;
}

