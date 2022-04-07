#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;

    getline(cin ,s);

    stringstream ss;

    ss << s;

    int arr[100000];

    int i = 0,x;
    char ch;

    while(ss >> x)
    {
        arr[i++] = x;
        ss >> ch;


    }
    for(int j = 0;j < i;j++)
    {
        cout << arr[j] << endl;
    }
}


