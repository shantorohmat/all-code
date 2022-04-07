#include <iostream>
using namespace std;
void  prime(int n)
{
    int count = 0;
    if(n < 2)  cout << "NO" << endl;
    if(n == 2) cout << "YES" << endl;
    else{
    for(int i = 2;i < n;i++)
    {
        if(n % i == 0)
        {
            cout << "NO" << endl;
            count = 1;
            break;
        }

    }
        if(count == 0)
        cout << "YES" <<endl;


    }
}



int main()
{
    int n;

    cin >> n;

    prime(n);

    return 0;
}
