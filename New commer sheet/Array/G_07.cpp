#include <iostream>
using namespace std;

int main()
{
    int n,count;

    cin >> n;

    int *p = new int [n];

    int *m = new int [n];

    for(int i = 0;i < n;i++)
    {
        cin >> p[i];
        count = i;
    }
    for(int i = count,j = 0;i >= 0;i--,j++)
    {
        m[j] = p[i];
    }
    for(int i = 0;i < n;i++){



    if(m[i] == p[i]) { count = 1;}

    else if(m[i] != p[i]) {

        count = 0;
        break;
    }

    }
    if(count == 0) cout << "NO" << endl;

    else cout << "YES" << endl;

    return 0;

}
