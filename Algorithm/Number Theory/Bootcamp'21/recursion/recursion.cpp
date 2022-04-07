#include <iostream>
using namespace std;

int arr[7];
void input(int n)
{
    if(n == 0)
        return ;
    input(n-1);
      cin >> arr[n];


}
void output(int n,int baki)
{
    if(baki == 0)
        return ;
    cout << arr[n] << " ";
    output(n+1,baki-1);


}
int main()
{
    input(6);
    cout << "How many want to print : ";
    int k;
    cin >> k;
    output(1,k);



}
