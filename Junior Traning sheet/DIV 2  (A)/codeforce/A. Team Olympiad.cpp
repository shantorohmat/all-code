#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int>v[4];
    int n,a,b,c,CNT = 0;
    cin >> n;
    int arr[4] = {};
    for(int i = 1;i <= n;i++)
    {
        cin >> a;
        arr[a]++;
        v[a].push_back(i);

    }
    int x = min(arr[1],arr[2]);
    int y = min(x,arr[3]);

    cout << y << endl;
    if(y > 0)
    for(int i = 0;i < y;i++)
    {
        cout << v[1][i] << " " << v[2][i] << " " << v[3][i] << endl;
    }



}
