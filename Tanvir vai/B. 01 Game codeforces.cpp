#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n;

    cin >> n;
    while(n--){
    string s;

    cin >> s;

    stack <char> st;
    int j = 0;

    for(int i = 0; i < s.size();i++)
    {
        if(st.empty())
        {
            st.push(s[i]);
            continue;
        }

        if(s[i] == '\n') {break;}

        if(s[i] == s[i-1])
        {
            st.push(s[i]);
        }
        else
        {
            st.pop();
            s.erase(s.begin()+i);
            s.erase(s.begin()+i-1);
            j++;
            i -= 2;
        }
    }

    if(j%2)
    {

        cout <<  "DA" << endl;
    }
    else  cout << "NET" << endl;

    }
}
