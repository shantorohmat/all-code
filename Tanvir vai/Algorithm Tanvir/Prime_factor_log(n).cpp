/// Time Complexity O(n)
#include <iostream>
using namespace std;
void primeFactor(int n)
{
    for(int i = 2;i <= n;i++)
    {
        if(n % i == 0)
        {
            int c = 0;

            while(n % i == 0)
            {
                n /= i;
                c++;
            }
            cout << i << "^" << c << endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    primeFactor(n);
}
