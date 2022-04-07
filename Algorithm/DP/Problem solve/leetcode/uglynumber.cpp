
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>
#include <map>
#include <set>
#include <queue>
using namespace std;

bool  ugly(int n)
{
    if (n <= 0) return 0;


    while (n % 2 == 0)
    {
        n = n / 2;
    }



    while (n % 3 == 0)
    {
        n = n / 3;
    }


    while (n % 5 == 0)
    {
        n = n / 5;
    }

    if (n == 1) return 1;
    else return 0;


}

int main()
{

//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//#endif

    int k;
    cin >> k;
    cout << ugly(k);

}
