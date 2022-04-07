#include <iostream>
using namespace std;

int main()
{
    int t,neg = 0,pos = 0,eve = 0,od = 0;

    cin>> t;

    int *m = new int [t];

    for(int i = 0;i < t;i++)
    {
        cin>> m[i];
    }
    for(int i = 0;i < t;i++)
    {
        if(m[i] < 0)  neg++;

        if(m[i] > 0) pos++;

        if(m[i]%2 == 0) eve++;

        if(m[i] % 2 != 0) od++;
    }

    cout <<  "Even: " << eve <<   endl;

    cout << "Odd: " << od << endl;

    cout << "Positive: " << pos << endl;

    cout << "Negative: " << neg << endl;

    return 0;
}
