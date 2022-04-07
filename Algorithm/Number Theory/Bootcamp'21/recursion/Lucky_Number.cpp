#include <iostream>
using namespace std;
void Bit(int n,string res = "")
{
    if(n == 0)
    {
        cout << res << endl;
        return;
    }
    Bit(n-1,res + "4");
    Bit(n-1,res + "7");
}
int main()
{
    int n = 4;
    Bit(n);
}

