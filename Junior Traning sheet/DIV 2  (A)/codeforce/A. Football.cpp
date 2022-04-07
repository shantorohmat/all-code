#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string>v[1000];
    string s,p;

    for(int i = 0;i < n;i++)
    {
        cin >> s;
        v[i].push_back(s);


    }
    for(int i = 0;i < n;i++)
    {
        s = v[0][0];
        //cout << s << endl;
        if(s != v[i][0]){
            p = v[i][0];
            //cout << p << endl;
            break;
        }

    }
    int k = 0,l = 0;
    for(int i = 0;i < n;i++)
    {
        if(s == v[i][0])
            k++;
        else l++;
    }
    if(k > l) cout << s << endl;
    else cout << p << endl;
}
