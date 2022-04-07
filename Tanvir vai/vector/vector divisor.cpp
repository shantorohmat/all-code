#include <bits/stdc++.h>
using namespace std;
#define mx 101
vector<int>v[mx];
int main()
{


    for(int i = 1;i < mx;i++)
    {
        for(int j = i;j < mx;j += i)
        {
            v[j].push_back(i);
        }
    }

    for(int i = 1;i < mx;i++)
    {
        cout << "Divisor of " << i << " are :  ";
        for(int j = 0;j < v[i].size();j++)
        {
            cout << v[i][j] << " ";

        }
        cout << endl;
    }
}
