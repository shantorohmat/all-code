#include <iostream>
using namespace std;
int main()
{
    int arr[100][100],c = 0,r = 0,k = 0;
    for(int i = 1;i <= 5;i++)
    {
        for(int j = 1; j <= 5;j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1)
            {
                r = i;
                c = j;
            }
        }
    }





    if(r < 3)
    {
      while(r != 3)r++,k++;
    }
     if(c > 3)
    {
        while(c != 3) c--,k++;
    }
     if(r > 3)
    {
        while(r != 3) r--,k++;
    }
    if(c < 3)
    {
        while(c != 3) c++,k++;
    }
    cout << k << endl;





}
