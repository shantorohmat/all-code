#include <iostream>
using namespace std;
void Bit(int n,string res = "")
{
    if(n == 0)
    {
        cout << res << endl;
        return;
    }
    Bit(n-1,res + "0");
    Bit(n-1,res + "1");
}
int main()
{
    int n = 4;
    Bit(n);
}
