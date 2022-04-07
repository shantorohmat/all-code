#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int s[3];

    for(int i = 0;i < 3;i++)
        cin >> s[i];

    sort(s,s+3);

    cout << s[0] << " " << s[2] <<endl;

    return 0;
}
