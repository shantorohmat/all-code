#include <iostream>
#include <stack>
#include <iterator>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--){
    string s;
    cin >> s;
    stack<char> st;

    for(int i = 0 ;i < s.size();i++)
    {
        if(s[i] >= 97 && s[i] <= 122)
        {
            cout << s[i];

        }
        else if(s[i] != 40 && s[i] != 41)
        {
            st.push(s[i]);
        }

        if(s[i] == 41)
        {
            cout << st.top() ;
            st.pop();
        }
    }
    cout << endl;
    }



}
