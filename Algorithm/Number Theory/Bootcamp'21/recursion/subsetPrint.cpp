#include <bits/stdc++.h>
using namespace std;
int arr[] = {1,4,6};
void subsetP(int n,string res = "")
{
    if(n == 3)
    {
        cout << res << endl;
        return;
    }

    subsetP(n+1,res + " " + to_string(arr[n]));

    subsetP(n+1,res);
}
int main()
{
    int n = 3;
    subsetP(0);

}
