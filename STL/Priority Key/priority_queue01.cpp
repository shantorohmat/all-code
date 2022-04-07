///z h d b a (order)

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue <string> p;

    p.push("ali");
    p.push("bella");
    p.push("shanto");
    p.push("zhanto");
    p.push("akhi");

    while(!p.empty())
    {
        string x = p.top();
        cout << x << endl;
        p.pop();
    }
    return 0;

}
