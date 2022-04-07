#include <iostream>
#include <set>
using namespace std;

int main()
{

    ios_base :: sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    int m[100001];

    set <int> s;

    for(int i =0;i < n;i++)
    {
        cin >> m[i];

        s.insert(m[i]);
    }
    cout << s.size() <<endl;


}
