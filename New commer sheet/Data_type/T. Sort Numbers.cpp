#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int s[3];

    for(int i =0;i < 3;i++)
        cin >> s[i];

        int p[3];

     for(int i = 0;i < 3;i++)
        p[i] = s[i];

    sort(s,s+3);

    for(int i = 0;i < 3;i++)
        cout << s[i] <<endl;
        cout << endl;
     for(int i = 0;i < 3;i++)
        cout << p[i] << endl;

}
