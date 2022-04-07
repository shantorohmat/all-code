/*
 nways[0]=1;
      for(int i=0;i<3;i++){

            for(int j=coins[i],k=0;j<=11;j++,k++){

                  nways[j]+=nways[k];

            }

      }
      cout << nways[11] << endl;
      */


#include <iostream>
using namespace std;
#define INF 999999
#define MAX_N 20
#define MAX_W 10000

#define INF 99999999
#define EMPTY_VALUE -1

//int c[MAX_N];
int mem[MAX_N][MAX_W];
int coins[1000000];
int nways[1000000];


int main(){
    int n,x;
    cin >> n >> x;

    ///    int coins[5]={1, 5, 7};

    for(int i = 0;i < n;i++)cin >> coins[i];

      int cent,total;

      nways[0]=1;



      for(int i=0;i<n;i++){

            for(int j=coins[i],k=0;j<=x;j++,k++){

                  nways[j]+=nways[k];
//                  cout << "("<<j <<")"<<nways[j] << " ";

            }
//            cout << endl;

      }
      cout << nways[x] << endl;





return 0;

}

