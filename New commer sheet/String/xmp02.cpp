#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main()
{
    int curhigh = 0,newsc;

    ofstream fout("templeRun.txt");

    cin  >> newsc;

    if(curhigh < newsc)
    {
        curhigh = newsc;
    }
    fout << "Current High score:" << curhigh << endl;

    fout << "New Score: " << newsc << endl;

    fout.close();

    ifstream fin("templeRun.txt");

    cout << "Current High score:" << curhigh  << endl;
    fin >>  newsc ;

    cout << "New Score: " << newsc << endl;
    fin >>  newsc ;




    return 0;
    fin.close();


}
