///insert || find || erase || push_back || clear


#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number : ";

    cin >> n;

    vector <int> v(n);

    vector <int> :: iterator it;

    for(int i = 0; i < n;i++)
    {
        cin >> v[i];
    }

    ///if (mp.find(x) != mp.end())


    it = find(v.begin(),v.end(),6);

    v.insert(it,100);



    it = v.end() -1;

    v.erase(it);


    cout << "Elements : " << endl;

    for(it = v.begin();it != v.end();it++)
    {
        cout << *it << " ";
    }

    cout << endl;



}
