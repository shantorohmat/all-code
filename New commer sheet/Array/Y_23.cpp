///size problem

#include <iostream>
#include <vector>
using namespace std;
#define size 100001
int main()
{
    int n,m,x,y;

    long long int result;


    cin >> n >> m;

    //vector <long long int> p(n);

    long long  int *p = new long long int [size];

    p[0] = 0;

    for(int i = 1;i <= n;i++)
    {
        cin >> p[i];

        p[i] = p[i] + p[i-1];
    }

    while(m--)
    {
        cin >> x >> y;

        result = p[y] - p[x-1];

        cout << result << endl;
    }
    return 0;
}
