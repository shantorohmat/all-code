
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
    int a,n;

    set<int>s;

    cin >> n;

    while(n--)
    {
        cin >> a;
        s.insert(a);

    }
    for(int i = 0;i < n;i++)
    {
        cout << s[i] << endl;
    }
}
/// set duplicates value  show kora na
/// set sorted value show kora
