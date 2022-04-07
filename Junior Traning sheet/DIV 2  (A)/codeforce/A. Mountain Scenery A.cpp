#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n,k,p = 0,j = 0;
    cin >> n >> k;
    int arr[210];
    vector <int> v;

    for(int i = 0;i < ((2*n)+1);i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
     reverse(v.begin(),v.end());

    while(k--){
            int MaX = 0;

    for(int i = 0;i < v.size();i++)
    {
        int x = v[i];

         MaX = max(x,MaX);
    }




    for(int i = 0;i < v.size();i++)
    {
        if(v[i] == MaX)
        {
            int x = MaX - 1;
            v[i] = -1;

            arr[p] = x;
            p++;
            break;
        }
    }




    }
    p--;
    //for(auto x : v) cout << x << " ";
     for(int i = 0;i < v.size();i++)
     {
         if(v[i] == -1)
         {
             v[i] = arr[p];
             p--;
         }
     }
     reverse(v.begin(),v.end());

     for(auto x  : v) cout << x << " ";









}

