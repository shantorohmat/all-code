#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *x  = new int [n];
    for(int i = 0;i < n;i++)
        cin >> x[i];
    sort(x,x+n);
    for(int i = 0;i < n;i++)
        cout << x[i] << " ";
}
