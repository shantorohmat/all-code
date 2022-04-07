#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;

    getline(cin ,s);

    stringstream ss;

    ss << s;

    int arr[10000];

    int i = 0,x;

    while(ss >> x)
    {
        arr[i++] = x;


    }
    for(int j = 0;j < i;j++)
    {
        cout << arr[j] << endl;
    }
}

