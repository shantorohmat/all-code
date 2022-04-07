#include <bits/stdc++.h>
using namespace std;

void solve1(int* a)
{
    *a = 10;
}

void solve2(int a)
{
    a = 10;
}


int main()
{
    int a = 5, b = 5;

    solve1(&a);
    solve2(b);

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    return 0;
}
