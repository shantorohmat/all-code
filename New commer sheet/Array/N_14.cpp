#include <iostream>
#include <string>
using namespace std;

int main()
{

    int a,b,count = 0,x,i;

    cin >> a >> b;


   string p;

   cin >> p;

   int d = p.length();



    for( i = 0;i < d;i++)
    {
        if(p[i] == '-')
        {
            count++;
            x = i+1;

        }
    }
    if(count == 1 && a+1 == x && a+b+1 == d)
    {
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;

    return 0;


}
