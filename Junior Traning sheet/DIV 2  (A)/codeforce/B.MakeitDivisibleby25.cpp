#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        string v;
        v = s;
        int j = 0;
        for(int i =s.size()-1;i >= 0;i--)
        {
            if(v[v.size()-1] == '0' && v[v.size()-2] == '0')
            {
                break;
            }
            if(v[v.size()-1] == '2' && v[v.size()-2] == '5')
            {
                break;
            }
            if(v[v.size()-1] == '5' && v[v.size()-2] == '0')
            {
                break;
            }
            if(v[v.size()-1] == '7' && v[v.size()-2] == '5')
            {
                break;
            }
            
            if(s[i] == '7' && i != s.size()-1)
            {
                v.push_back(s[i]);
            }

           
            if(s[i] == '2' || s[i] == '5' || s[i] == '0')
            {
                v.push_back(s[i]);
            }
            

        }
        cout << v << endl;
    }
}