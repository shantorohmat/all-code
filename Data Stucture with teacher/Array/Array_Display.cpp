#include <iostream>
#include <string.h>
using namespace std;
void Display(int arr[],int n)
{
    cout << "Element of the array : ";
    for(int i =0;i < n;i++)
        cout << arr[i]<< " ";
}

int main()
{
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;
    int *p = new int[n];
    cout << "Enter the number of the element : ";
    int x,c = 0;
    cin >> x;
    cout << "Enter the element :";
    for(int i =0;i < x;i++)
        cin >>p[i],c++;

    cout << "number of element :" << c<< endl;


    Display(p,x);
    delete[] p;
}
