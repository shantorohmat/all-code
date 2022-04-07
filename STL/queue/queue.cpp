#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue <int> q;

    q.push(10);
    q.push(12);
    q.push(14);
    q.push(16);
    q.push(15);

    while(!q.empty())
    {
        int x = q.front();
        cout << x << endl;
        q.pop();
    }

    return 0;
}
