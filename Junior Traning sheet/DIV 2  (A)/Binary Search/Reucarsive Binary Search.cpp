//0(log(n)
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath> // fooor();
using namespace std;
vector<int>v;
int RBSearch(int l,int h,int key)
{
    while(l  <= h)
    {
        int mid = floor((l+h)/2);

        if(key == v[mid] )
            return mid;

        else if(key < v[mid])
             return RBSearch(l,mid - 1,key);
        else if(key > v[mid])
             return RBSearch(l,mid + 1,key);
    return  -1;
    }
}
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

    cout << "which number you want to find out : " ;
        int key;
        cin >> key;

        int l = 0,h = n-1;

    int x = RBSearch(l,h,key);
    if(x>=0)
        cout << x+1 << " is index of " << key << endl;
        else cout << "There is no such number .";
}

