#include <iostream>
#include <string>
#include <cstring>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    string s;
    cin >> s;
    int *arr = new int [n+7];

    for(int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    int k = 0;
    for(int i = 0; i < s.length();i++)
    {
        //if(s[i+1] == 'L' && s[i] == 'R') cout << "ami" << endl;
        if(s[i] == 'R' && s[i+1] == 'L')
        {
            //cout << "ami" << endl;
            k = 1;
            int m = (arr[i]+arr[i+1])/2;
            m -= arr[i];
            v.push_back(m);


        }
    }
    sort(v.begin(),v.end());
    if(k == 1) cout << v[0] << endl;
    if(k == 0) cout << "-1" << endl;
}
