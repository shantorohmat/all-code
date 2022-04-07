#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main()
{
    int n;
    scanf("%d ",&n);
    string s;
    getline(cin,s);
    int c = 0,d = 0,miN = INT_MAX;

    for(int i = 1;i <= n;i++)
    {
        if(s[i] == s[i-1])
        {

           c++;


        }
        else {

                miN = c;



        }

    }

    if(miN == INT_MAX) miN = 0;
    cout << miN  << endl;

}
