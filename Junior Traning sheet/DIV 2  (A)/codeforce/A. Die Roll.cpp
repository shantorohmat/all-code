#include <iostream>
#include <algorithm>
#include <math.h>
#include <cmath>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int s = max(a,b);

    int c = 6 - s + 1;

    if(c == 1) cout << "1/6" << endl;
    else if(c == 2)  cout << "1/3" << endl;
    else if(c == 3) cout << "1/2" << endl;
    else if(c == 4) cout << "2/3" << endl;
    else if(c == 5) cout << "5/6" << endl;
    else if(c == 6) cout << "1/1" << endl;
    else cout << "0/1" << endl;
}
