#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int l1,l2,r1,r2,l= 0,r= 0;

    cin >> l1 >> r1 >> l2 >> r2;

    if(l1 > l2)
        l = l1;
    else l = l2;

    if(r1 > r2)
        r = r2;
    else r = r1;

    if(max(l1,l2) > min(r1,r2)) cout << -1 << endl;
    else cout << l << " " << r << endl;


}
