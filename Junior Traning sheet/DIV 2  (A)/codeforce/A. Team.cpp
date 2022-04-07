#include <iostream>
using namespace std;
int main()
{
    int n, k = 0, a, b, c;
    cin >> n;
    for(int i = 0;i < n;i++)
    {
        cin >> a >> b >> c;
       if(a == 1 && b == 1 && c == 0 || a == 1 && b == 0 && c == 1 || a == 0 && b == 1 && c == 1 )
        k++;
       else if(a == 1 && b == 1 && c == 1)
        k++;

    }
    cout << k << endl;
}
