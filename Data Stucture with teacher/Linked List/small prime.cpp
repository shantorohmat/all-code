#include <iostream>
using namespace std;
bool Prime(int n)
{
    if(n < 2) return 0;
    if(n == 2) return 1;
    if(n %2 == 0) return 0;
    for(int i = 3;i < n/2;i=i+2)
    {
        if(i%2)
            return 1;
    }
}

int main()
{
    while(1){
    int n,m;

    cin >> n >> m;
    for(int i = n;i < m;i++)
    {
        if(Prime(i) == 1)
            cout << i <<" ";


   }

}}
