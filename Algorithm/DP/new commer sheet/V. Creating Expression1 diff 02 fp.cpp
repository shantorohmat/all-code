
#include <iostream>
///wrong ans

using namespace std;
int n,sum;
int a[100007];
int c = 0,b = 0;

int expr(int pos)
{
    if(pos == n-1)
        return c == sum || b == sum;
     c =  expr(pos+1) + a[pos+1];
     b =  expr(pos+1) - a[pos+1];
    return c || b;

}
int main()
{
    cin >> n >> sum;
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
   if(expr(0)) cout << "YES" << endl;
   else cout << "NO" << endl;
}

