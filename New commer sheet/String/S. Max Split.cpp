#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string s;

    int j = 0,c = 0,x = 0,y =0;

    cin >> s;

    int i = 0;

    while(s[i] != '\n'){
            c++;

    for( i = 0;i < s.size();i++)
    {
        if(s[i] == 'L')
        {
            x++;
        }
        if(s[i] == 'R')
        {
            break;
        }
    }

     for( i = 0;i < s.size();i++)
    {
        if(s[i] == 'L')
        {
            break;
        }
        if(s[i] == 'R')
        {
            y++;
        }
    }

    int p[100];

    if(x == y)
    {
        p[j] = x;
       j++;
    }
    }



    for(int i = 1; i < c;i++)
    {
        if(s[0] < s[i])
        {
            int rem = s[0];
            s[0] = s[i+1];
            s[i+1] = rem;
        }


    }
    cout << s[0] <<endl;

    int l = 0;

    while(c--){


    for(int i = 0;i < s[l];i++)
    {
        cout << "L";
    }
    for(int i = 0;i < s[l];i++)
    {
        cout << "R";
    }
    l++;
    }


}
