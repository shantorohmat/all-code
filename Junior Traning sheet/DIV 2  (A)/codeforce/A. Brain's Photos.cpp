#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    bool k = 0,l = 0;
    for(int i = 0;i< n;i++)
    {
        for(int j = 0;j< m;j++)
        {
            char c;
            cin >> c;
            if(c == 'C' || c == 'M' || c == 'Y') k = 1;
            else l = 1;
        }

    }
    if(k) cout << "#Color" << endl;
    else  cout << "#Black&White" << endl;

}
