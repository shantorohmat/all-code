
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

void  ugly(int n)
{
    int *dp = new int[n + 7];

    int j = 1;
    dp[0] = 1;

    int i2 = 0, i3 = 0, i5 = 0;
    int next_2 = 0, next_3 = 0, next_5 = 0;
    int next_x, next;

    for (int i = 0; i  < n - 1; i++)
    {
        next_2 = dp[i2] * 2;
        next_3 = dp[i3] * 3;
        next_5 = dp[i5] * 5;
        next_x = min(next_2, next_3);
        next = min(next_x, next_5);
        dp[j++] = next;
        //cout << j << ": " << res[j] << endl;
        //++j++;
        if (next == next_2)
            i2++;
        if (next == next_3)
            i3++;
        if (next == next_5)
            i5++;

    }
    cout << dp[n - 1];

}

int main()
{


    int k;
    cin >> k;
    ugly(k);

}
