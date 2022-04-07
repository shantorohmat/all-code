#include <iostream>
using namespace std;

double avg(double m[],int n )
{
    double sum = 0;
    for(int i = 0;i < n;i++)
    {
        sum = sum + m[i];
    }
    return sum/n;
}

int main()
{
    double m[1001];

    int n;

    cin >> n;

    for(int i = 0;i < n;i++)
    {
        cin >> m[i];
    }
    double r =  avg(m,n);

    cout.precision(7);

    cout << fixed << r << endl;


}
