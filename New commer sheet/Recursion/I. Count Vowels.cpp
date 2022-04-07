#include <iostream>
#include <cstring>
using namespace std;
int rec(char s[],int i)
{
    static int k = 0;
    if(i > -1)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' )
        {
            k++;
        }
        i--;
        rec(s,i);
    }
    return k;
}
int main()
{
    char s[202];
    cin.getline(s,202);
    int n = strlen(s);
    int r = rec(s,n);
    cout << r << endl;
}
