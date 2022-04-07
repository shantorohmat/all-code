#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = 0;

   for(int i = 1;i <= n;i++)
    k++;
    cout << k << endl;
    k= 0;
    while(n--){
        k++;
    }
    cout << k << endl;
}
