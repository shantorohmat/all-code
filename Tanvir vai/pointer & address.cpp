#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5};

    int x = 5;

    cout << &x << endl;
    cout << *(&x) << endl;

    cout << *(arr+3) << endl;
}
