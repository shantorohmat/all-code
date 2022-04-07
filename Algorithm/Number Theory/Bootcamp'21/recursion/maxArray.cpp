#include <bits/stdc++.h>
using namespace std;
int arr[] = {4,8,7,3,11};
int maxValue(int n)
{
    if(n < 0) return INT_MIN;
    return max(arr[n],maxValue(n-1));
}
int minValue(int n)
{
    if(n < 0) return INT_MAX;
    return min(arr[n],minValue(n-1));
}
int main()
{
    int n = 5;


    cout << maxValue(n-1) << endl;
    cout << minValue(n-1) << endl;

}
