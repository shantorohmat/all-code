#include <functional>
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
#define ll long long int
//#include <funtional> for greater<int>() in sort in descending order


int main()
{

    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n, greater<int>());
    int end = 0 ;
    for (int i = 0; i < n - 2; i++)
    {
        int a = arr[i];
        int b = arr[i + 1];
        int c = arr[i + 2];

        if (a + b > c && a + c > b && b + c > a)
        {
            cout << "YES" << endl;
            end = 1;
            break;
        }
    }
    if (end == 0) cout << "NO" << endl;
    return 0;



}

