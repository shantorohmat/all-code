#include <iostream>
using namespace std;

/*void rowchange(int n,int n,int s[][n],int x,int y)
{

         for(int j = 0;j < n;j++)
        {
            int ren = s[x-1][j];

            s[x-1][j] = s[y-1][j];

            s[y-1][j] = ren;
        }

        for(int i =0;i < n;i++)
        {
          for(int j = 0;j < n;j++)
            {
                cout << s[i][j] << " ";
            }
            cout << endl;
        }

        cout << endl << endl;



        for(int j = 0;j < n;j++)
        {
            int ren = s[j][x-1];

            s[j][x-1] = s[j][y-1];

            s[j][y-1] = ren;
        }

        for(int i =0;i < n;i++)
        {
          for(int j = 0;j < n;j++)
            {
                cout << s[i][j] << " ";
            }
            cout << endl;
        }


}*/

int main()
{
    int n,x,y;

    int s[501][501];

    cin >> n >> x >> y;

    for(int i =0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            cin >> s[i][j];
        }
    }
   /// cout << endl<< endl;

    ///rowchange(n,n,s,x,y);


        for(int j = 0;j < n;j++)
        {
            int ren = s[x-1][j];

            s[x-1][j] = s[y-1][j];

            s[y-1][j] = ren;
        }

        /*for(int i =0;i < n;i++)
        {
          for(int j = 0;j < n;j++)
            {
                cout << s[i][j] << " ";
            }
            cout << endl;
        }

        cout << endl << endl;*/



        for(int j = 0;j < n;j++)
        {
            int ren = s[j][x-1];

            s[j][x-1] = s[j][y-1];

            s[j][y-1] = ren;
        }

        for(int i =0;i < n;i++)
        {
          for(int j = 0;j < n;j++)
            {
                cout << s[i][j] << " ";
            }
            cout << endl;
        }




}
