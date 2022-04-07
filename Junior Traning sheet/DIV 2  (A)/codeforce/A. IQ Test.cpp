#include <iostream>
using namespace std;
int main()
{
    char arr[5][5];
    for(int i = 0;i < 4;i++)
    {
        for(int j = 0;j < 4;j++)
        {
            cin >> arr[i][j];
        }
    }
    int k = 0;
    for(int i = 0;i < 4;i++)
    {
        for(int j = 0;j < 4;j++)
        {
            if(i < 3 && j < 3)
            {
                if(arr[i][j] == arr[i+1][j] && arr[i][j] == arr[i][j+1]  )
                {
                    arr[i+1][j+1] = arr[i][j] ;
                    k = 1;
                    break;
                }
                if(arr[i][j] == arr[i+1][j] && arr[i+1][j+1] == arr[i][j] )
                {

                     arr[i][j+1] =arr[i][j] ;
                     k = 1;
                    break;
                }
                 if( arr[i][j+1] == arr[i][j] && arr[i+1][j+1] == arr[i][j] )
                {


                    arr[i+1][j] =  arr[i][j];
                    k = 1;
                    break;
                }

            }
        }
    }
        if(k == 0){

        for(int i = 4;i >=0 ;i--)
    {
        for(int j = 4;j >= 0;j--)
        {
            if(i >= 0 && j >= 0)
            {
                if(arr[i][j] == arr[i-1][j] && arr[i][j] == arr[i][j-1]  )
                {
                    arr[i-1][j-1] = arr[i][j] ;
                    break;
                }
                if(arr[i][j] == arr[i-1][j] && arr[i-1][j-1] == arr[i][j] )
                {

                     arr[i][j-1] =arr[i][j] ;
                    break;
                }
                 if( arr[i][j-1] == arr[i][j] && arr[i-1][j-1] == arr[i][j] )
                {


                    arr[i-1][j] =  arr[i][j];
                    break;
                }

            }
        }


    }
        }

    for(int i = 0;i < 4;i++)
    {
        for(int j = 0;j < 4;j++)
        {
            if(i < 3 && j < 3)
            {
                if(arr[i][j] == arr[i+1][j] && arr[i][j] == arr[i][j+1] && arr[i][j] == arr[i+1][j+1])
                {
                    cout << "YES" << endl;
                    return 0;
                }

            }
        }

    }
    cout << "NO" << endl;
}
