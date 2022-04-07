#include <iostream>
using namespace std;

int main()
{
    int r1,c1,r2,c2,s[102][102],p[102][102];
    cin >> r1 >> c1;/// The number of columns of the 1st matrix must equal
    ///the number of rows of the 2nd matrix.

    for(int i = 0;i < r1;i++)
    {
        for(int j = 0;j < c1;j++)
            cin >> s[i][j];
    }

    cin >> r2 >> c2;

    for(int i = 0;i < r2;i++)
    {
        for(int j = 0;j < c2;j++)
            cin >> p[i][j];
    }

    int mul[100][100];
///And the result will have the same number of rows as the 1st matrix,
///and the same number of columns as the 2nd matrix.
    for(int i = 0;i < r1;i++)
        for(int j = 0;j < c2;j++)
          mul[i][j] = 0;

   for(int i = 0;i < r1;i++)
        for(int j = 0;j < c2;j++)
            for(int k = 0;k < r2;k++)
          mul[i][j] = mul[i][j] + s[i][k]*p[k][j];

    //cout << endl << "Output Matrix: " << endl;
    for(int i = 0; i < r1; ++i)
    for(int j = 0; j < c2; ++j)
    {
        cout << mul[i][j] << " ";
        if(j == c2-1)
            cout << endl;
    }
    return 0;

}
