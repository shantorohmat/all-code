#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";

    char c ;
    cin >> c;
    string p;
    cin >> p;

    for(int i = 0;i < p.size();i++)
    {
        if(c == 'R')
        {
            for(int j = 0;j < s.size();j++){
            if(p[i] == s[j])
            {
                int k = j;
                k--;
                cout << s[k] ;
            }
            }

        }
        else if(c == 'L')
        {
            for(int j = 0;j < s.size();j++){
            if(p[i] == s[j])
            {
                int k = j;
                k++;
                cout << s[k] ;
            }
            }
        }
    }
    cout << endl;
}
