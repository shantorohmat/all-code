#include <iostream>
using namespace std;
int main()
{
    int n;

   cin >> n;


for(int r = 1;r <= n;r++)
{
    if(r == 1 || r == n){
    for(int c = 1;c <= (2*n);c++)
    {
        cout << "*";
    }
    cout << endl;
    }

    else{

    for(int c = 1;c < 2;c++)
    {
        cout << "*";
    }


    for(int c = 1;c < ((2*n)-1);c++)
    {
        cout << " ";
    }


    for(int c = 1;c < 2;c++)
    {
        cout << "*";
    }
    cout << endl;


    }

}
return 0;
}


