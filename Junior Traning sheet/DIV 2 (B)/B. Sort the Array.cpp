
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>
#include <map>
#include <set>
#include <queue>
#define ll unsigned long long int
#define ld long long double

using namespace std;

const int INF = 1e7;


int mod = 1e9 + 7;
int fast()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}

int fix_mod(int a, int b)
{
    return (((a & b) + b) % b);
}

int mod_add(int a, int b)
{
    return (a % mod + b % mod) % mod;
}

int add(int a, int b)
{
    if (a < 0) a += mod;
    if (b < 0) b += mod;
    if (a + b >= mod) return a + b - mod;
    return a + b;
}
ll gcd(ll a, ll b)
{
    if (b == 0LL) return a;
    return gcd(b, a % b);
}
int main()
{

//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//#endif
    vector<int>v, v1, v2;
    int n;
    cin >> n;
    for (int i = 0 ; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        v1.push_back(x);
        v2.push_back(x);
    }
    sort(v1.begin(), v1.end());
    reverse(v2.begin(),v2.end());
    if(v2 == v1)
    {
        cout << "yes" << endl;
        cout << "1 " << n << endl;
        return 0;
    }

    if(v == v1)
    {
        cout <<"yes" << endl<<  "1 1" << endl;
        return 0;
    }
    int first_id,second_id;

    for(int i = 0;i < n;i++)
    {
        if(v[i] != v1[i])
        {

            first_id = i;
            break;
        }
    }
    for(int i = n - 1;i >= 0;i--)
    {
        if(v[i] != v1[i])
        {
            second_id = i;
            break;
        }
    }


    for(int i = first_id,j = second_id;i < j ;i++,j--)
    {
        swap(v[i],v[j]);
    }


    if( v == v1)
    {
        cout << "yes" << endl;
        cout << first_id + 1 << " " << second_id + 1 << endl;

    }
    else cout << "no" << endl;





}
