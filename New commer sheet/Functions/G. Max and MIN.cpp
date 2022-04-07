#include <iostream>
#include <algorithm>
using namespace std;

void fun(int a[],int n)
{
    sort(a,a+n);

   cout << a[0] << " " << a[n-1];

}

int main()
{
    int n,m[10000];

    cin >> n ;

    for(int i = 0;i < n;i++)
    {
        cin >> m[i];
    }

    fun(m,n);

    return 0;



}
