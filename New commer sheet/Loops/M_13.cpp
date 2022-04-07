#include <iostream>
using namespace std;
#define size 100000
int s[size];

void dive()
{
    int count,m,p;
    for(int i = 1;i <= size;i++)
    {
        s[i] = 0;
    }
    for(int i = 1;i <= size;i++)
    {
        bool n = true;
        m = i;
        p = i;


        while(n){

         m = p % 10;
         p = p / 10;

        if(p == 0) {n =  false; }

        if(m == 4 || m == 7)
        {
            count = 0;
        }

        else
        {
            count = 1;
            break;
        }
        }
        if(count == 0)
        {

            s[i] = 1;
        }
    }


}

int main()
{
    int n,m,count = 0,o = -1;

    cin>> n >> m;
    dive();

    for(int i = n;i <= m;i++)
    {
        if(s[i])
        {
            count = 1;
            cout << i<< " ";
        }
    }
    if(count == 0) { cout << o << endl;}
    cout << endl;
    return 0;
}
