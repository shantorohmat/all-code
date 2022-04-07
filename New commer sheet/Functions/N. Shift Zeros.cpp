#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    int n;

    cin >> n;

    int m[10001];

//    vector<int> a;
//    vector<int> :: iterator it;

    for(int i = 0;i < n;i++)
    {
        cin >> m[i];
        //a.push_back(m[i]);
    }
     int c = 0;

    int a[10001],j = 0;

    for(int i = 0;i < n;i++){
        if(m[i] != 0)
    {
        a[j] = m[i];
        j++;
    }
    if(m[i] == 0) c++;
    }

    for(int i = 0;i < c;i++)
    {
        a[j] = 0;
        j++;
    }

        for(int i = 0;i < n;i++){cout << a[i] << " ";}
}
