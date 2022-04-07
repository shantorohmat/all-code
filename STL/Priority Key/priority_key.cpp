///descending order

#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue <int> p;

    p.push(100);
    p.push(400);
    p.push(50);
    p.push(40);
    p.push(30);

    while(!p.empty())
    {
        int x = p.top();
        cout << x << endl;
        p.pop();
    }
    return 0;
}


