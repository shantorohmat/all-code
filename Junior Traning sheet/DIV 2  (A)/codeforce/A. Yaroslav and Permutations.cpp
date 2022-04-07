#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[107] ;
    int c = 0;
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];

    }

    for(int i = 0;i < n;i++)
    {
        c = 0;
        for(int j = 0;j < n;j++){
        if(a[i] == a[j])
            c++;
        }
            if(n < 2*c-1)
            {
               cout << "NO" << endl;
               return 0;
            }

    }
    cout << "YES" << endl;
}

