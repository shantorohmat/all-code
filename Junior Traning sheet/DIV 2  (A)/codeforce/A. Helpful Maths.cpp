#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s;

    int g[200],k;

    cin >> s;

    int d = s.size();

    for(int i = 0,j = 0;i < d;i= i+2,j++)
    {

         g[j] = int(s[i]) - 48;
         //cout << g[j] <<" ";

    }
    //cout <<endl;

    int f = d/2;

    int x = f;

    sort(g,g+(f+1));

    for(int i =0;i <= f;i++)
    {
        if(i == x) cout << g[i] << endl;
        else
        cout <<g[i] << "+";
    }
}
