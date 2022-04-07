#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <math.h>
using namespace std;
#define ll long long int

int main()
{
    int s[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int n,m,k = 0;
    cin >> n >> m;

    for(int i = 0;i < 15;i++)
    {
        if(s[i] == n && s[i+1] == m)
        {
            k =1;
            break;
        }
    }
    if(k == 1) cout << "YES" << endl;
    else cout << "NO" << endl;



}

