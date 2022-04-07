#include <iostream>
#include <string>
#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--){

        char s[100001],p[100001];

        ///getline(cin,s);

        ///getline(cin,p);

        ///scanf(" %[^\n]",s);

        ///scanf(" %[^\n]",p);

        cin >> s >> p ;

        int d1 = strlen(s),d2 = strlen(p),d;

        if(d1 > d2)
        {
            d = strlen(p);

        }
        else
        {
            d = strlen(s);

        }


        for(int i = 0;i < d;i++)
        {
            cout << s[i] ;
            for(int j = i;j < i+1;j++)
            {
                cout << p[j];

            }
        }

        if(d1 > d2)
        {
            for(int i = d2;i < d1;i++)
            {
                cout << s[i];
            }

        }
        else
        {
            for(int i = d1;i < d2;i++)
            {
                cout << p[i];
            }

        }
        cout << endl;
    }

        return 0;

}
