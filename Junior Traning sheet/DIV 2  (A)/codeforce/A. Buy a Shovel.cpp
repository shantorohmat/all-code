#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int i,sum = 0;
    for( i = 1;;i++)
    {
        sum += n;
        if((sum % 10) == 0)
        {

            break;
        }
        if(sum  % 10 == k)
            break;
    }
    cout << i  << endl;
}
