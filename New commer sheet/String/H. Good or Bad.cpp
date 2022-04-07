#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;

    cin >> n;

    while(n--)
    {
        string s;

        cin >> s;

        int count = 0,d = s.size();

        for(int i = 0;i < d - 2;i++)
        {
        if((s[i] == '1' && s[i+1] == '0' && s[i+2] == '1') || (s[i] == '0' && s[i] == '1' && s[i] == '0'))
               {
                    count = 1;
                    break;
               }
               else count = 0;
        }
        if(count == 0)
        {
            cout << "Bad" << endl;
        }
        else if(count == 1) cout << "Good" << endl;
    }
    return 0;
}
