#include <iostream>
#include <cstring>
using namespace std;

void permutation(char s[])
{
    static int a[10];
    static char res[10];
    memset(a,0,sizeof(a));

    int i = 0,k =0;

    if(s[k] == '\0')
    {
        res[k]  = '\0';
        ////for(int i = 0 ;i < k ;i++)
        cout << res << endl;
    }
    else
    {
        for(i = 0;s[i] != '\0';i++,k++)
        {
            if(a[i] == 0)
            {
                res[k] = s[i];
                a[i] = 1;
                permutation(s);
                a[i] = 0;
            }
        }
    }

}
int main()
{
    cout << "Input a word  for permutation : " << endl;
    char  s[10];
    cin >> s;
    int n = 10;
    permutation(s);
}
