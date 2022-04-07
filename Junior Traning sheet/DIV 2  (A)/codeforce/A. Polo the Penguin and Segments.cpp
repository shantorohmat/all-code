#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int sum = 0,x,y;
    for(int i = 0;i < n;i++)
    {
        cin >> x >> y;
        sum += (y - x) + 1;
    }
//    cout << sum << " " << sum%k << endl;
    cout << (k - (sum % k) ) % k<< endl;
}
