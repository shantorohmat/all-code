#include <iostream>
using namespace std;
int n,sum;
int a[100007];
int c = 0,b = 0;
int expr(int pos,int cur_sum)
{
    if(pos == n-1)
    {
        return (sum == cur_sum);
    }
    int c =  expr(pos+1,cur_sum + a[pos+1]);
    int b =  expr(pos+1,cur_sum - a[pos+1]);
    return c || b;

}
int main()
{
    cin >> n >> sum;
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
   if(expr(0,a[0])) cout << "YES" << endl;
   else cout << "NO" << endl;
}
