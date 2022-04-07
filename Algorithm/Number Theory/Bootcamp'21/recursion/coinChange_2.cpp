#include <bits/stdc++.h>
using namespace std;
#include <vector>
vector <int>v;
int coin(int pos,int terget,int n)
{
    if(terget == 0) return 0;
    if(pos == n) return 1e9;

    int na_niye = 1 + coin(pos + 1,terget - v[pos],n);
    int   niye  = coin(pos+1,terget,n);


    return min(na_niye,niye);
}
int main()
{
    int n;
    cin >> n;
    v.resize(n);
    for(int i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    int terget ;
    cin >> terget;
    cout << coin(0,terget,n) << endl;

}
