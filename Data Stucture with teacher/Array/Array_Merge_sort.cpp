#include <iostream>
using namespace std;

int main()
{
    int n,a[100],b[100],c[100];

    cout << "Enter  the number of element :  " << endl;
    cin >> n;


    cout << "Enter the element of the first array : ";


    for(int i = 0;i < n;i++)
        cin >> a[i];
    cout << "Enter the element of the second array : ";


    for( int j = 0;j < n;j++)
        cin >> b[j];

    int i = 0,j = 0;
    int k = 0;
    while(i < n && j < n)
    {
        if(a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }

    }
    for(;i < n;i++)
        c[k++] = a[i];
    for(;j<n;j++)
    c[k++] = b[j];

    for(int k = 0;k < (2*n);k++)
        cout << c[k] << " ";
    cout << endl;

}
