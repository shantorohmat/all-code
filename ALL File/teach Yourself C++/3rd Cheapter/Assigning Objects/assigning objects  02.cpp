#include <bits/stdc++.h>
using namespace std;

class shanto
{
    int a,b;

public:

    void set(int a,int b);

    void show();
};

class shuvo
{
    int a,b;

public:

    void set(int a,int b);

    void show();
};

inline void shanto :: set(int a,int b)
{
    this-> a = a;

    this -> b = b;
}

inline void shanto :: show()
{
    cout << a * b << endl;
}

int main()
{
    shanto on;
    shuvo ob;

    on.set(4,5);

    ob = on; /// two different class objects can't pass their value.

    on.show();
    ob.show();


    return 0;

}






