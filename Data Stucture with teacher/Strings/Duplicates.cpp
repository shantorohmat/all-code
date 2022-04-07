#include <iostream>
#include <cstring>
using namespace std;
int main()
{

    cout << "Duplicate char finding using hashing table ." << endl;

    string s;

    cin >> s;

    int h[26],f = 0;

    memset(h,0,sizeof(h));

    for(int i = 0;i < 26;i++)
    {
        h[s[i]-97]++;
    }
    for(int i = 0 ;i < 26;i++)
    {
        if(h[i] > 1)
        {
            char p = 97+i;
            f = 1;

            cout << "Duplicates char : " << endl;

            cout <<  p << " " << h[i] << endl;
        }


    }
    if(f == 0) cout << "There is no duplicates char ." << endl;
}
