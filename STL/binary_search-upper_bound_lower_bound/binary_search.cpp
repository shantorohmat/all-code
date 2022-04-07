#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    //int arr[5] = {1,2,3,4,5};

    vector <int> v;

    for(int i = 0;i < 10;i++)
    {
        v.push_back(i);
    }


    vector <int> :: iterator it ;
    it = lower_bound(v.begin(),v.end(),5);


   bool ans = binary_search(v.begin(),v.end(),5);

    if(ans) cout  << "found" << endl;
   else cout << "not found" << endl;

    cout << *it << endl;

    it++;
    it = upper_bound(v.begin(),v.end(),6);

    cout << *it << endl;



}
