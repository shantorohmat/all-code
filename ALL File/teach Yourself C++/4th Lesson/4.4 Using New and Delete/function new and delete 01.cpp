#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *p;

    p = new int;

    if(!p)
    {
        cout << "Allocation error!" << endl;

        exit(1);
    }

    *p = 1000000;

    cout << "Here is integer at p : " << *p << endl;

    delete p ;

    return 0;
}
