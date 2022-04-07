#include <iostream>
using namespace std;
int ar[100001];

void primeFactor()
{
    int maxn = 100000;

    for(int i = 1;i <= maxn;i++) ar [i] = -1;

    for(int i = 2;i <= maxn;i++)
    {
        if(ar[i] == -1)
        {
            for(int j = i;j <= maxn;j+=i)
            {
                if(ar[j] == -1)
                {
                    ar[j] = i;
                }

            }
        }
    }

}

int main()
{
    int n;

    cin >> n;
    int a = n;

    primeFactor();
    while(n != 1)
    {
        //if(ar[i] != -1)
        cout<< "*" << ar[n] ;
        n = n / ar[n];

    }
    cout << "=" << a << endl;
}
