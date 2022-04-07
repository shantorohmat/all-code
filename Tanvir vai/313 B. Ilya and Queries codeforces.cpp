#include <iostream>
#include <cstring>
#include <string>
using namespace std;
 int a[1000000];
int  main()
{

   ios_base::sync_with_stdio(0);
   cout.precision(15); cout << fixed;
   cout.tie(0); cin.tie(0);
    string s;


    getline(cin,s);
    for(int i = 1;i <  s.size() ;i++)
    {
       if(s[i] == s[i-1])
       a[i]++;
    }
    a[0] = 0;
    for(int i = 1; i < s.size();i++)
    {
        a[i] += a[i-1];
    }

    int m;

    cin >> m;

    for(int i = 0 ;i < m;i++)
    {
        int l,r;

        cin >> l >> r;

        int m = a[r-1] - a[l-1];

        cout << m << endl;
    }



}
