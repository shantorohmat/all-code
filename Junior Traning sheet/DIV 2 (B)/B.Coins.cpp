#include <iostream>
#include <array>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
pair<int,char>v[3];
int main()
{
    //cout << v[0].first << endl;


   v[0].second = 'A';
   v[1].second = 'B';
   v[2].second = 'C';

   for(int i = 0;i < 3;i++)
   {
       string s;
       cin >> s;

       if(s[1] == '>')
       {
            v[s[0]- 'A'].first++;
       }
       else{
            v[s[2] - 'A'].first++;
       }
   }
  // cout << v[2].first << endl;


       sort(v,v+3);
       if(v[0].first == v[1].first || v[1].first == v[2].first)
       {
           cout << "Impossible" << endl;
       }
       else
       cout << v[0].second <<  v[1].second <<  v[2].second << endl;






}
