#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file;

    file.open("templeRun.txt");

    int x,y,z;

    cin  >> z ;

    file >> x;

    if( z > x)
    {
       y = z;
    }
    else y = x;

    ofstream n;

    n.open("templeRun.txt");

    n << y;

    n.close();
    cout << "Current High score:" << y << endl;

    cout << "New Score:" << z << endl;

    file.close();


}
