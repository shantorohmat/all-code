#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int>v;

int main()
{
    cout << "Give a integer value : ";
    int n;
    cin >> n;

    cout << "Give " << n << " sorted integer : ";

    for(int i = 0;i < n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << v.size() << endl;

    cout << "which number upper bound you to want to find out  : " ;
        int key;
        cin >> key;

   int l = -1, r = n;
   while(l < r - 1)
   {
       int m = (l+r)/2;
       if(v[m] > key) r = m;
       else l = m;
   }
     cout << "upper Bound : " << upper_bound(v.begin(),v.end(),key )- v.begin()<< endl;
   cout << r << endl;
}
//4 8 10 15 18 21 24 27 29 33 37 39 41 43 44
