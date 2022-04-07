#include <iostream>
using namespace std;
int valid(string s)
{
    for(int i = 0;s[i] != '\0';i++)
    {
        if(!(s[i] == 63)&&!(s[i] == 34)&&!(s[i] == 33) &&!(s[i] == 39)&&!(s[i] == 44) && !(s[i] == 46)&&!(s[i] == 32) &&!(s[i]>=65 && s[i] <= 90)&& !(s[i] >= 97 && s[i] <= 122) && !(s[i] >=48 && s[i]<= 57))
        {
            return 0;
        }
    }
    return 1;

}
int main()
{
    cout << "How many string do you want as input : " ;
    int n;
    scanf("%d ",&n);
    while(n--)
    {
        string s;
        getline (cin,s);
        if(valid(s))
        {
            cout << "valid string" << endl;
        }
        else cout << "not valid string" << endl;


    }
}
