#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype
{
    char *p;
public:
    strtype(char *s)
    {
    int l ;
    l = strlen(s) + 1;

    p = new char [1];

    strcpy(p,s);
    }
    ~strtype() { delete []p; }
    char *get() { return p; }
};

void show(strtype &x)
{
    char *s;

    s = x.get();

    cout << s << endl;
}
int main()
{
    strtype a("Hello"),b("there");

    show(a);
    show(b);

    return 0;

}

