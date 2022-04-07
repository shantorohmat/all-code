#include <iostream>
using namespace std;

void arrayg(int a[],int b[],int n)
{
    int c[2*100001];

    int j = 0;

    for(int i = 0;i < n;i++)
    {
        c[j++] = b[i];
    }
    for(int i = 0;j < 2*n;i++)
    {
        c[j++] = a[i];
    }

    for(int i = 0;i  < 2*n;i++)
    {
        cout << c[i] << " ";
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);

    int n,a[100001],b[100001];

    cin >> n;

    for(int i = 0;i <n;i++)
    {
        cin >> a[i];
    }
    for(int i = 0;i < n;i++)
    {
        cin >> b[i];
    }

    arrayg(a,b,n);
}
