/// time complexity --> O(n)
#include <iostream>
using namespace std;
int n;
char board[100][100];
bool cc[100],dl[100],dr[100];
bool Issafe(int x,int y)
{
   if(cc[y]|| dl[x+y] || dr[x-y+n-1]) return false;
    return true;
}
void Nqueen(int row)
{
    if(n == row)
    {
        for(int i = 0 ;i < n;i++)
        {
            for(int j = 0;j < n;j++)
            {
                cout << board[i][j] ;
            }
            cout << endl;
        }
        cout << endl;
    }
    for(int col = 0;col < n;col++)
    {
        if(Issafe(row,col))
        {
            cc[col] = dl[row+col] = dr[row-col+n-1] = 1;
            board[row][col] = 'Q';
            Nqueen(row+1);
            board[row][col] = '-';
            cc[col] = dl[row+col] = dr[row-col+n-1] = 0;
        }

    }
}
//int  countNqueen(int row)
//{
//    if(n == row)
//    {
//       return 1;
//    }
//    int total = 0;
//    for(int col = 0;col < n;col++)
//    {
//        if(Issafe(row,col))
//        {
//            board[row][col] = 'Q';
//            total += countNqueen(row+1);
//           board[row][col] = '-';
//        }
//
//    }
//
//    return total;
//}
int main()
{

    cin >> n;
    for(int i = 0 ;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            board[i][j] = '-';
        }
    }

    Nqueen(0);
//    cout << countNqueen(0) << endl;

}

