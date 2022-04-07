#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <string> s;

    s.push("shanto");
    s.push("shuvo");
    s.push("akhi");

    while(!s.empty())
    {
        string x = s.top();
        cout << x << endl;
        s.pop();
    }

    return 0;
}
