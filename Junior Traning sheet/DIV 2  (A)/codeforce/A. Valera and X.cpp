#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char arr[303][303];
    for(int i = 0;i< n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            cin >> arr[i][j];

        }

    }


    bool k = 0;
    char last  = arr[0][0];
    char c  = arr[0][0];
     for(int i = 0;i< n;i++)
    {
        int j ;
        for(j = 0;j < n;j++)
        {
            if(i == j)
            {

               if(last == arr[i][j]) k = 1;
               else { k = 0;break;}
            }
        }
        if(i == j) last = arr[i][j];
        if(k == 0) break;
    }
    //cout << k << endl;

    for(int i = 0;i < n ;i++)
    {
        int j = n-1-i;
        if(k == 1){
        if(arr[i][j] == c)
        {
            k = 1;
            arr[i][j] = arr[0][1];

        }
        else {
            k = 0;
            break;
        }
        }


    }


   char cm = arr[0][1];
    for(int i = 0;i< n;i++)
    {
        for(int j = 0;j < n;j++)
        {

            if(k == 1)
            {
                if(i != j)
                {
                    if(c == arr[i][j]) {k = 0 ;break;}
                    else if(arr[i][j] != cm) { k = 0;break; }
                }
            }
        } if(k == 0 ) break;



    }
    if(k )  cout << "YES" << endl;
    else cout << "NO" << endl;
}

