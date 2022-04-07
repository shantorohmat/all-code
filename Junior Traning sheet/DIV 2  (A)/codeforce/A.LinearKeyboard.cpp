#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        string a;
        cin >> a;
        int k = 0;
        int  arr[1000];
        for(int i = 0;i < a.size();i++)
        {
            for(int j = 0;j < s.size();j++)
            {
                if(a[i] == s[j])
                {
                    arr[k] = j+1;
                    k++;
                    break;
                }
            }

        }
        int kl  = 0;
        for(int i = 0;i < k-1;i++)
        {
        
            kl += abs(arr[i+1]  - arr[i]) ;
        // cout << arr[i+1] <<  "-" << arr[i] << "=" << kl << endl;
        // cout << kl << " ";

        }
        cout << kl  << endl;
        /* code */
    }
    
    
}