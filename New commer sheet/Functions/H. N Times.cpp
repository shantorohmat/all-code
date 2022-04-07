#include <iostream>
using namespace std;

void fun(int m[],int x,char s[])
{
    for(int i = 0;i < x;i++)
    {
        for(int j =0;j < m[i];j++)
        {
            cout << s[i] << " ";

        }
        cout << endl;

    }


}

int main()
{
    int n;

    cin >> n;

    int m[10000];

    char a[100];

    for(int i = 0;i < n;i++)
    {
        cin >> m[i] >> a[i] ;
    }

    fun(m,n,a);

    return 0;
}
