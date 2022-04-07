#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <stack>

using namespace std;
int main(){
    int n,a;

    scanf("%d",&n);

    vector<int> order;

    for(int i = 0;i <= n && n+1 != 0;i++)
    {
        scanf("%d",&a);
        order.push_back(a);
    }
    //int x;cin >> x;

    stack<int> lane;
    int need = 0;
    bool state = true;
    int i = 0;
    while(i < n) {
        while (!lane.empty() && lane.top() == need+1) {
            need++;
            lane.pop();
        }
    if (order[i] != need+1) {
		lane.push(order[i]);
        }

	else {
            need++;

        }
        i++;
    }
    while (!lane.empty() && lane.top() == need + 1) {
            need++;
            lane.pop();
            }
    puts(need == n ? "yes" : "no");
}

