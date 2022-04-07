#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <math.h>
#include <cmath>
using namespace std;
int main()
{
    string s,sp;
    vector<char>v;
    vector<char>v1;
    cin >> s;
    int i = 0;
    char k = 124;


    for(;s[i] != k;i++)
    {


       v.push_back(s[i]);


    }
    //for(auto x : v) cout << x ;
    //cout << endl; cout << v.size() << endl;
    i++;


    for(;i < s.size();i++)
    {
        v1.push_back(s[i]);


    }
   //for(auto x : v1) cout << x ;
   //cout << v1.size() << endl;
   cin >> sp;
    int size1 = v.size(),size2 = v1.size();
    int size = abs(size1 - size2);
    int size3 = sp.size();

    if(size == size3){

   if(v1.size() > v.size())
   {
       for(int i = 0;i < sp.size();i++)
       {
           v.push_back(sp[i]);
       }

   }
   else
   {
       for(int i = 0;i < sp.size();i++)
       {
           v1.push_back(sp[i]);
       }
   }
   if(v1.size() == v.size())
   {
       for(auto x : v)
        cout << x;
       cout << k ;
       for(auto x : v1)
        cout << x;
        cout << endl;
   }
   else cout << "Impossible" << endl;
    }
    else {
            if(size > size3) {
                cout << "Impossible" << endl;
                return 0;
            }

        if(size < size3)
        {

            int ui = 0;
            if(v1.size() > v.size())
   {
       for( ui = 0;ui < size;ui++)
       {
           v.push_back(sp[ui]);
       }

   }
   else
   {
       for( ui = 0;ui < size;ui++)
       {
           v1.push_back(sp[ui]);
       }
   }
   int ds = size3 - size;


       if(ds%2) {

        cout << "Impossible" << endl;
        return 0;
       }
       ds = ds/2;
       int pl = ds;

       //for(;ui <= ds;ui++)
       while(ds--)
       {
           v1.push_back(sp[ui]);
           ui++;
       }
       //for(;ui <= ds+ds-1;ui++)
       while(pl--)
       {
           v.push_back(sp[ui]);
           ui++;
       }

        }
        for(auto x : v) cout << x ;
       cout << k;
       for(auto x : v1) cout << x ;

    }
}
