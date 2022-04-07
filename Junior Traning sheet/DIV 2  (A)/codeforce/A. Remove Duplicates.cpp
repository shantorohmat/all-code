#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int *v = new int[n];
    for(int i = 0;i < n;i++) cin >> v[i];


    int k = 0;
    for(int i = 0;i < n;i++)
    {
        for(int j = i+1;j < n;j++)
        {
            if(v[i] == v[j])
            {
                k++;
                v[i] = 0;
                break;
            }
            //if(i == n - 1) break;
        }
        //if(i == n - 1) break;
    }
    cout << n - k << endl;


    for(int i = 0;i < n;i++)
    {
        if(v[i] != 0)
        cout << v[i] << " ";
    }

}
