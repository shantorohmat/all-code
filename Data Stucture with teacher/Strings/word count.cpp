#include <iostream>
#include <string>
using namespace std;
int main()
{
    string  s;
    int n,cc = 0 ,vc = 0;

    cout  << "How many string you want to input : " ;

    scanf(" %d ",&n);

    for(int i = 0;i < n;i++)
    {
        cc = 0;
        getline(cin,s);

        for(int i = 0;i < s.size();i++)
        {
            if(s[i] == ' ')
            {
                cc++;
            }
        }

        cout << "number of word : " << cc+1 << endl;
    }
}
