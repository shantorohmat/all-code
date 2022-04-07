#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        char ans = 'z';
        int k = 0;
        for(int i = 0;i < s.size();i++)
        {
            if(s[i]<= ans)
            {
                ans = s[i];
                k = i;

            }
        }
        cout << ans << " ";
        for(int i = 0;i < s.size();i++)
        {
            if(i != k)
            cout << s[i];
        }
        cout << endl;
    }

    
}