#include <iostream>/// sheet 4
#include <string>
using namespace std;
int main()
{
    int n;

    scanf("%d ",&n);

    string s;

    getline(cin,s);

    string o = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    string k = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";

    if(n == 1)
    {
        for(int i = 0;i < s.size();i++)
        {
            for(int j = 0;j < o.size();j++)
            {
                if(s[i] == o[j])
                    cout << k[j] ;
            }
        }
    }
    else
    {
        for(int i = 0;i < s.size();i++)
        {
            for(int j = 0;j < k.size();j++)
            {
                if(s[i] == k[j])
                    cout << o[j] ;
            }
        }

    }
}
