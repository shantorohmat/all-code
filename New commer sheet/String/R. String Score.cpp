#include <iostream>
#include <cstring>
#include <string>



using namespace std;

int main()
{
    int n,num = 0,x = 0;

    cin >> n;

    string s  ;

    cin >> s;


    for(int i = 0;i < s.size();i++)
    {


        if(s[i] == 'Y' && s[i-1] != 'X')
        {
            x++;
        }
    }

    for(int i = 0;i < s.size()+x ;i++){

    if(s[i] == 'V')
    {
        num = num + 5;

    }
    else if(s[i] == 'W')
    {
        num = num + 2;


    }

    else if(s[i] == 'X')
    {

        i++;
    }

    else if(s[i] == 'Y')
    {

         s[s.size()] = s[i+1];
         s[s.size()+1] =  '\n';

         i++;

    }

    else if(s[i] = 'Z' )
    {
        if(s[i+1] == 'V')
        {
            num = num / 5;

            i++;


        }
        else if(s[i+1] == 'W')
        {

            num = (int)num /2;

            i++;
        }

    }

    }


    cout << num << endl;

    return 0;
}
