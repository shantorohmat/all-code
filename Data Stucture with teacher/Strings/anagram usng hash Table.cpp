#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s1,s2;

    cin >> s1 >> s2;

    int h[26];

    memset(h,0,sizeof(h));

    for(int i = 0 ; s1[i] != '\0';i++)
    {
        h[s1[i] - 97]++;
    }
    int i ;
    for( i = 0 ;s2[i] != '\0';i++)
    {
        h[s2[i] - 97]--;
        if(h[s2[i] - 97] < 0)
        {
            cout << "Not anagram " << endl;
            break;
        }
    }
    if(s2[i] == '\0')
        cout << "It's anagram " << endl;


}
