#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <math.h>
using namespace std;
#define ll long long int
double n,m,a;
int main()
{

    cin >> n>> m >> a;

    ll z = ceil(n/a)  * ceil(m/a);
    cout << z << endl;

}
