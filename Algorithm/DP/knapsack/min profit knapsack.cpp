#include<iostream>
using namespace std;
int main()
{
    int n;
    double w;
    cin >> n >> w;
    double *profit = new double[n];
    double *weight = new double[n];
    double *ratio = new double[n];
    for(int i = 0; i  < n;i++)
    {
        cin >> weight[i] >> profit[i];


    }


      for(int i = 0; i  < n;i++)
    {
         ratio[i] = profit[i]/weight[i];


    }



    for(int i = 0 ;i < n;i++)
    {
        for(int j = 0;j < n;j++){
        if(profit[i] > profit[j])
        {
            swap(ratio[i],ratio[j]);
            swap(profit[i],profit[j]);
            swap(weight[i],weight[j]);

        }
        }
    }



    ///---------------------------------------------------------
    ///---------------------------------------------------------

    int W = w;
    double p = 0;

    for(int i = n-1;i >= 0;i--)
    {


        int kw;

        W = W - weight[i];

        if( W>= 0)
        {
                kw = weight[i];
        }
         else
         {
             kw  = W + weight[i];
             W = 0;



         }

        p = p +  profit[i] * (kw/weight[i]);

        if(W <= 0) break;

    }
//    cout << endl;

    cout << p << endl;









}


