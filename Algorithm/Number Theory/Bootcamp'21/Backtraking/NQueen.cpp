/// time complexity --> O(n)
#include <iostream>
using namespace std;
int n;
char board[100][100];
bool Issafe(int x,int y)
{
    // colum
    for(int i = 0;i < x;i++)
    {
        if(board[i][y] == 'Q')return false;
    }

    //right diagonal
    int i = x,j = y;
    while(i >= 0 && j < n)
    {
        if(board[i][j] == 'Q')return false;
        i--;
        j++;
    }

    //lift diagonal
     i = x,j = y;
    while(i >= 0 && j >= 0)
    {
        if(board[i][j] == 'Q')return false;
        i--;
        j--;
    }
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
            board[row][col] = 'Q';
            Nqueen(row+1);
           board[row][col] = '-';
        }

    }
}
int  countNqueen(int row)
{
    if(n == row)
    {
       return 1;
    }
    int total = 0;
    for(int col = 0;col < n;col++)
    {
        if(Issafe(row,col))
        {
            board[row][col] = 'Q';
            total += countNqueen(row+1);
           board[row][col] = '-';
        }

    }
    return total;
}
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
    cout << countNqueen(0) << endl;
}
