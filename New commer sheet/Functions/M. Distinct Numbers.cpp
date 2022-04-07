#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,count =0;

    cin >> n;

    int m[100001];

    for(int i =0;i < n;i++)
        cin >> m[i];

    for(int i = 0;i < n;i++)
        for(int j =0;j < n;j++)
    {
          if(i == j){count++;}

          if(m[i] == m[j]) { break;}
    }
    cout << count << endl;
}
