#include <bits/stdc++.h>
using namespace std;
int check(int cur,int spt_pos,string s)
{
    for(int i = cur;i < spt_pos;i++)
    {
        if(s[i] == s[spt_pos]) return 0;

    }
    return 1;
}
void permute(int pos,string s)
{
    if(pos == s.size() - 1)
    {
        cout << s << endl;
        return;
    }
    for(int i = pos;i < s.size();i++)
    {
        if(check(pos,i,s)){
        swap(s[pos],s[i]);
        permute(pos+1,s);
        swap(s[pos],s[i]);
        }

    }
}
set<string>st;
void uniq_permute(int pos,string s)
{
    if(pos == s.size() - 1)
    {
        st.insert(s);

        return;
    }
    for(int i = pos;i < s.size();i++)
    {
        swap(s[pos],s[i]);
        uniq_permute(pos+1,s);
        swap(s[pos],s[i]);

    }
}
int main()
{
    string s;
    cin >> s;
    permute(0,s);
    cout << "x : " << endl;
    uniq_permute(0,s);
    for(auto el : st)
    {
        cout << el << endl;
    }
    cout << endl;
}
