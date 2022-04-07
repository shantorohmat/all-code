#include <iostream>
using namespace std;

int main()
{
    int n,m = -1,count = 0;
    cin >> n;
    for(int i = 1;i  <= n;i++)
    {
        if(i %2 == 0){
        cout << i << endl;
        count = 1;
        }
    }
    if(count == 0) cout << m << endl;
    return 0;

}
