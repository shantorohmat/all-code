#include <iostream>
using namespace std;
#define INF 999999
#define MAX_N 20
#define MAX_W 10000

#define INF 99999999
#define EMPTY_VALUE -1

//int c[MAX_N];
int mem[MAX_N][MAX_W];
int c[] = {2,5,13,15};
int n = sizeof(c);
int coin(int i,int w)
{

    if(w < 0) return INF;
    if(i == n)
    {
        if(w == 0) return 0;
        return INF;
    }


    int res_1 = 1 + coin(i + 1, w - c[i]);
    int res_2 = coin(i + 1, w);


    mem[i][w] = min(res_1, res_2);
    //cout << c[i] << endl;

    return mem[i][w];
}
int main()
{


    int w = 22;
    cout << coin(0,w) << endl;
}
///O(N*W)
