#include <iostream>
using namespace std;
int main()
{
    int m,n;

    cin >> m >> n ;

    char s[50];

    for(int i = 0;i < m;i++)
    {
        cin  >> s[i];
    }
    while(n--){

    for(int i = 0;i < m;i++)
    {
        if(s[i] == 'B' && s[i+1] == 'G')
        {

            s[i] = 'G';
            s[i+1] = 'B';
            i++;


        }
    }
    }
    for(int i = 0;i < m;i++)
    {
        cout << s[i];
    }
}
