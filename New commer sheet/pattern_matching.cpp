#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s,p;
    getline(cin,s);
    getline(cin,p);
    int k = 0;
    cout << s.size() << " " << p.size() << endl;
    for(int i = 0;i < s.size()-p.size() + 1;i++)
    {
        k = 0;
        int j;
        if(s[i] == p[k])
        {
            for( j = i;k < p.size();j++)
            {
                if(s[j] == p[k])
                {
                    k++;
                    //i++;
                }
                else break;
            }
        }
        if(k == p.size())
        {
            cout << "index : " << j - p.size()  << endl;
            break;
        }
    }
}
