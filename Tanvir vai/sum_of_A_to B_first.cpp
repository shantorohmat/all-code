#include <iostream>
using namespace std;
int main()
{
    int n,arr[100000],x,y;
    cin >> n;

    for(int i = 1;i <= n;i++)
        cin >> arr[i];

    while(1)
    {
        cin >> x >> y;
        int sum = 0;

        for(int i = x;i <= y;i++)
        {
            sum+= arr[i];
        }
        cout << sum << endl;
    }



}
