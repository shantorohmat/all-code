#include <iostream>
using namespace std;
int main()
{
    int wt[] = {0,3,2,5,4};
    int p[] =  {0,4,3,6,5};
    int K[6][6] = {0};
    int n = 4;
    int m = 8;

    for(int i = 0;i < 5;i++)
    {
    for(int w = 0;w <= 5;w++)
    {
        if(i == 0 || w == 0)
            K[i][w] = 0;
        else if(wt[i] <= w)
        {
            int a = wt[i];
            K[i][w] = max(K[i-1][w],  K[i-1] [w - a ]+p[i]);

        }
        else K[i][w] = K[i-1][w];


    }
    }

    for(int i = 0;i < 5;i++)
    {
        for(int w = 0;w <= 5;w++)
        {
            cout << K[i][w] << " ";
        }
        cout << endl;
    }

//    for(int i = 4;i >= 0;i--)
//    {
//        for(int j = 5;j >= 0;j--)
//        {
//            if(K[i][j] == K[i-1][j])
//            {
//                cout << i << " 0" << endl;
//                i--;
//            }
//            else {
//                cout << i << " 1" << endl;
//                i--;
//            }
//        }
//    }
}
