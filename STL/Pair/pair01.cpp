
#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector< pair<string,int> >v;

    vector< pair<string,int> >:: iterator it;

    v.push_back(make_pair("shanto",12));
    v.push_back(make_pair("shuvo",10));
    v.push_back(make_pair("akhi",13));


    for(it = v.begin();it != v.end();it++)
    {
        cout << it->first << " " << it-> second << endl;
    }


    return 0;
}

