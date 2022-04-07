#include <iostream>
#include <map>
#include <queue>
#define ll long long int
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<int> q;
    map<int,int>mp;
    vector<int>v;

    int n,k,x,y,id;

    cin >> n >> k ;

    for(int i = 0;i < n;i++)
    {
        cin >> id;
        if(mp[id] == 0 ){
        q.push(id);
        mp[id] =1;
        if(q.size() > k)
        {
            x = q.front();
            q.pop();
            mp[x] = 0;
        }
      }
    }
        int z = q.size();

        cout << z << endl;

        while(!q.empty())
        {
            y = q.front();
            v.push_back(y);
            q.pop();
        }
        for(int i = v.size()-1;i >= 0;i--)
        {
            cout << v[i] << " ";
        }
        cout << endl;
}
