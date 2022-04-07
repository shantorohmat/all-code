#include<iostream>
using namespace std;

int n,x,y;

void swap(int &x,int &y){

    int t=x;
    x=y;
    y=t;

}
void swap_matrix(int arr[][500]){

    for(int j=0;j<n;j++)

        swap(arr[x][j],arr[y][j]);

    for(int i=0;i<n;i++)

        swap(arr[i][x],arr[i][y]);
}
int main(){

    cin>>n>>x>>y;

    x--;y--;

    int a[500][500];

    for (int i = 0; i < n; i++)

        for (int j = 0; j < n; j++)

            cin>>a[i][j];

    swap_matrix(a);

    for (int i = 0; i < n; i++){

        for (int j = 0; j < n; j++)

            cout<<a[i][j]<<' ';

        cout<<'\n';
    }
    return 0;
}
