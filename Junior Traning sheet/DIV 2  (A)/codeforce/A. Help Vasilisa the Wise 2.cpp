#include <iostream>
using namespace std;
int main()
{
    int r1,r2,c1,c2,s1,s2;
    cin >> r1 >> r2 ;
    cin >> c1 >> c2 ;
    cin >> s1 >> s2 ;
    int a,b,c,d,k = 0;

    for(int i = 1;i <= 9;i++)
    {
        a = i;
        b = r1 - a;
        c = c1 - a;
        d = s1 - a;
        if( 0 <a && a < 10 && 0 < b && b < 10 && 0 < c && c < 10 && 0<d && d < 10)
        if(a != b && a != c && a != d && b != c && b != d  && c != b && c != d  && r1 == a + b && r2 == c + d)
        {
            k = 1;
            cout << a  << " " << b << endl;
            cout << c << " " << d << endl;
            break;
        }
    }
    if(k == 0) cout << "-1" << endl;
}
