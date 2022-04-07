#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *srr = new int[n+7];

    for(int i = 1;i <= n;i++) srr[i] = 0;

    int k ;
    cin >> k;
    int *arr = new int[k+7];
    for(int i = 0;i < k;i++){
            cin >> arr[i];
            if(!srr[arr[i]])
            srr[arr[i]] = 1;
    }

    int x;
    cin >> x;
    int *brr = new int[x+7];
    for(int i = 0;i < x;i++) {
            cin >> brr[i];
            if(!srr[brr[i]])
            srr[brr[i]] = 1;
    }
    int cnT = 0;
    for(int i = 1;i <= n;i++)
    {
        if(srr[i] == 0){

            cnT = 1;
            break;
        }
    }
    if(cnT == 0)
    {
        cout << "I become the guy." << endl;
    }
    else cout << "Oh, my keyboard!" << endl;


}
