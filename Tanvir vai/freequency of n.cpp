#include <iostream>
using namespace std;
#define ll long long int
ll arr[100000];
int main()
{
    int n,x;

    cin >> n;

    for(int i = 0;i < n;i++)
    {
        cin >> x;
        arr[x]++;
    }
     while(1)
    {
        int d;
        cin >> d;
        cout << arr[d] << endl;
    }

}
