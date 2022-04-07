#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;



    while(cin >> s)
    {
        reverse(s.begin(),s.end());

        cout << s ;

        if(cin.get() != '\n')
        {
            cout << " ";
        }

    }

     return 0;


}
