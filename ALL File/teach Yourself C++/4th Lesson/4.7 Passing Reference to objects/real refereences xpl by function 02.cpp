#include  <bits/stdc++.h>
using namespace std;

class shanto
{
    int who;

public:

    shanto(int j)
    {
        who = j;

        cout << "constructor....." << who <<endl;

    }
    ~shanto() {cout << "Destructor....." << who << endl; }

    int id() { return who;}
};

void fun(shanto &n)
{
    cout << "Received....." << n.id() <<endl;
}

int main()
{
    shanto ob(45);

    fun(ob);


}
