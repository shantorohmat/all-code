#include <iostream>
#include <algorithm>
#include <string.h>
#include <set>
using namespace std;
char arr[107][107];
int main()
{

    int n,m;
    char c;
    cin >> n >> m >> c;
    memset(arr,'.',sizeof(arr));

    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            cin >> arr[i][j];

        }
    }
    set<int> s;
    int k = 0;
    int TP = 0;

     for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            if(arr[i][j] == c)
            {
                if(arr[i+1][j] >= 65  && arr[i+1][j] <= 90   && i+1 <= n  )
                {

                    s.insert(arr[i+1][j]);

                }
                if( arr[i-1][j] >= 65  && arr[i-1][j] <= 90 && i-1 >= 0)
                {

                    s.insert(arr[i-1][j]);

                }
                if(arr[i][j-1] >= 65  && arr[i][j - 1] <= 90  && j-1 >= 0)
                {

                    s.insert(arr[i][j-1]);

                }
                if(arr[i][j+1] >= 65  && arr[i][j+1] <= 90 && j+1 <= m )
                {


                    s.insert(arr[i][j+1]);

                }



            }



        }

    }
    for(auto i : s)
    {
        if(i == '.' || i == c)
        {
            continue;
        }
        k++;
    }
    cout << k;
}
