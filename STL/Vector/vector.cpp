/// runtime initialize || size || sort || reverse

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
    int n;


    vector <int> v1(10,2);

    vector <int> :: iterator it1;

    cout << "AUto Elements : " << endl;

    for(it1 = v1.begin();it1 != v1.end();it1++)
    {
        cout << *it1 << " ";
    }

    cout << endl;




    cout << "Enter a number : ";

    cin >> n;

    vector <int> v(n);

    vector <int> :: iterator it;

    for(int i = 0; i < n;i++)
    {
        cin >> v[i];
    }




    cout << "Elements : " << endl;

    for(it = v.begin();it != v.end();it++)
    {
        cout << *it << " ";
    }

    cout << endl;





    cout << "Size : " << v.size() << endl;





    sort(v.begin(),v.end() );


    cout << "Sorting Elements : " << endl;

    for(it = v.begin();it != v.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;





    reverse(v.begin(),v.end());


    cout << "Reverse Elements : " << endl;

    for(it = v.begin();it != v.end();it++)
    {
        cout << *it << " ";
    }

    cout << endl;






}
