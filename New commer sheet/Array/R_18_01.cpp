#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,count = 0;

    cin >> n;


    vector<int> v(n),v2(n);

    vector<int> :: iterator it;

    vector<int> :: iterator it1;

    for(int i = 0;i < n;i++)
    {
        cin >> v[i];
    }

    for(int i = 0;i < n;i++)
    {
        cin >> v2[i];
    }


    sort(v.begin(),v.end());


    sort(v2.begin(),v2.end());


    for(int i  = 0;i < n;i++)
    {
        if(v[i] == v2[i])
        {
            count++;
        }
    }

    if(n == count) {cout << "yes" << endl;}

    else cout << "no" << endl;

    return 0;


}
