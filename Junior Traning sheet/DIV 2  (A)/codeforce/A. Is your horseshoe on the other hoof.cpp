#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int>s;
    int a;
    for(int i = 0;i < 4;i++)
    {
        cin >> a;
        s.insert(a);
    }
    int ans = 4 - s.size();
    cout << ans << endl;
}
