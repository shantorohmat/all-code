#include<iostream>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<int>s;
    for(int i = 0 ;i < n;i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    int k = 1;

    if(s.size() == 2) k = 0;
    if(s.size() == 1) k = 0;
    if(s.size() == 4) k = 1;
    if(s.size() == 3)
    {
        int arr[3];
        int i = 0;
        for(auto it:s)
        {
            arr[i] = it;
            i++;
        }
        int a = arr[0];
        int b = arr[1];
        int c = arr[2];

        if(2*b == a + c)
        {
            k = 0;

        }
        else k = 1;
    }
    if(k == 1) cout <<"NO" << endl;
    else cout << "YES" << endl;


}
