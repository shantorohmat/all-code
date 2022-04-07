#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

int main()
{
    pair <string,int> p;

   //pair <string,int> :: iterator it;

    p.first = "shanto";
    p.second = 21;
    cout << p.first << " " << p.second << endl;
    p = make_pair("akhi",22);

   cout << p.first << " " << p.second << endl;

    return 0;
}

