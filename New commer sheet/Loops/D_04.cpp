#include <iostream>
using namespace std;

int main()
{
    bool t = true;
    while(t)
    {
        int n;

        cin >> n;

        if(n == 1999)
        {
            cout <<  "Correct" << endl;
            t =  false;
        }
        else cout << "Wrong" << endl;
    }
    return 0;
}
