#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cin >> n;
    for(int i = 0;i < n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);

    }
    sort(v.begin(),v.end());
    int cnT = 0;
    for(int i = 0;i < n;i++)
    {
        int x = v[i];
        if(v[0] < x && v[n-1] > x )
            cnT++;
    }
    cout << cnT << endl;
}
