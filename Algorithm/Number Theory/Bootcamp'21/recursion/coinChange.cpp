#include <bits/stdc++.h>
using namespace std;
#include <vector>
vector <int>v;
int coin(int terget)
{
    if(terget == 0) return 0;
    int ans = INT_MAX;
    for(auto C : v )
    {
        if(C > terget) continue;
        int baki = terget - C;
        ans = min(ans,1 + coin(baki));

    }
    return ans;
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
    cout << coin(terget) << endl;

}
