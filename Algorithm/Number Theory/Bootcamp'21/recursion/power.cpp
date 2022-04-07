#include <bits/stdc++.h>
using namespace std;
int pow(int n,int p)
{
    if(p == 0) return 1;
    return n * pow(n,p-1);
}
int pow_1(int n,int p)
{
    if(p == 0) return 1;

    int half = pow(n,p/2 );
    if(p%2 == 1) return half * half * n;
    return half * half;
}
int main()
{
    int n, p;
    cin >> n >> p;
    cout << pow_1(n,p) << endl;
    cout << pow(n,p) << endl;

}
