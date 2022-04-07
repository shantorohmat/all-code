#include <iostream>
using namespace std;
#define INF 999999
#define MAX_N 20
#define MAX_W 10000

#define INF 99999999
#define EMPTY_VALUE -1


 int nways[9] = {0};


int main(){

      int coins[3]={1,5,7};

      int cent,total;


      nways[0]=1;



      for(int i=0;i<3;i++){

            for(int j=coins[i],k=0;j<=11;j++,k++){

                  nways[j]+=nways[k];

            }

      }
      cout << nways[11] << endl;





return 0;

}

