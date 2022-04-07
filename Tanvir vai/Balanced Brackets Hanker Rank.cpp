#include <iostream>
#include <stack>
#include <string>
#define ll long long int
using namespace std;
int main()
{

    ll n;
    cin >>n;
    while(n--){
        stack<char>st;
        string s;
        int f = 0;
    cin >> s;
    for(int i = 0;i < s.size();i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
        else if(s[i] == ')')
        {
            if(st.size() > 0 && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                f = 1;
                break;
            }
        }
        else if(s[i] == '}')
        {
            if(st.size() > 0 && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                f = 1;
                break;
            }
        }
        else if(s[i] == ']')
        {
            if(st.size() > 0 && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                f = 1;
                break;
            }
        }
    }
    if(st.size() > 0) f = 1;
    if(f == 1) cout << "NO" << endl;
    else cout << "YES" << endl;
    }
}
