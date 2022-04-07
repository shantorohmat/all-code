#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,m,count = 1;

    cin >> n >> m;

    vector < int > v (n);

    vector < int> v2 (m),x(m),z(m);


    for(int i = 0;i < n;i++)
    {
        cin >> v[i];

    }

    for(int j = 0;j < m;j++)
    {
        cin >> v2[j];
    }

    int cur = 0;

    for(int i = 0;i < n;i++)
    {
        if(v[i] == v2[cur])
        {
            cur++;
        }
    }


    if(cur == m)
    {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;

    return 0;


}
