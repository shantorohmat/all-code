#include <iostream>
#include <string>//getline

using namespace std;
int main()
{
    string s;

    getline(cin,s);

    for(int i = 0;i < s.size();i++)
    {
        if(s[i] == '?')
        {
            s.erase(0,i+1);
        }
    }
    int c = 0;

    for(int i = 0;i < s.size();i++)
    {
        if(c == 0){
        if(s[i] == '=')
        {
            i++;
            cout<< "username: " ;
            while(s[i] != '&'){

                cout<<  s[i];
            i++;
            }
            c++;
            cout << endl;
        }

        }

        else if(c == 1)
        {
            if(s[i] == '=')
        {
            i++;
            cout<< "pwd: " ;
            while(s[i] != '&'){

                cout << s[i];
            i++;
            }
            c++;
            cout << endl;
        }


        }


         else if(c == 2)
        {
            if(s[i] == '=')
        {
            i++;
            cout<< "profile: ";
            while(s[i] != '&'){

                cout<< s[i];
            i++;
            }
            c++;

            cout << endl;
        }


        }

        else if(c == 3)
        {
            if(s[i] == '=')
        {
            i++;
            cout<< "role: ";
            while(s[i] != '&'){

                cout << s[i];
            i++;
            }
            c++;
            cout << endl;
        }


        }

        else if(c == 4)
        {
            if(s[i] == '=')
        {
            i++;
            cout<< "key: " ;
            while(s[i] != '&'){

                cout << s[i];
                if(i == s.size()-1)break;
            i++;
            }

            cout << endl;
        }


        }


    }


    return 0;

}
