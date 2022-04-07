#include <iostream>
using namespace std;
#define INF 999999
#define MAX_N 20
#define MAX_W 10000

#define INF 99999999
#define EMPTY_VALUE -1

int nways[9];



int main(){

      int coins[5]={2,4};

      int cent,total;

      nways[0]=1;



      for(int i=0;i<2;i++){

            for(int j=coins[i],k=0;j<=8;j++,k++){

                  nways[j]+=nways[k];

            }

      }
      cout << nways[8] << endl;





return 0;

}

