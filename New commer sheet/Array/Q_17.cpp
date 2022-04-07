#include <iostream>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--){

    int n,count = 0,c = 0;

    cin >> n;

    int *p = new int [n];

    for(int i = 0;i < n;i++)
    {
        cin >> p[i];
    }

    for(int i = 0;i < n;i++)
    {
        count++;
        for(int j = i;j < n-1;j++)
        {
                if(p[j] <= p[j+1]){
               /// cout << p[j] << " ";
                count++;
                }


            else  break;
        }

    }
    cout << count << endl;

    }
    return 0;


}
