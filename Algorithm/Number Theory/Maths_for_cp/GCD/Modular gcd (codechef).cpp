#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define ll long long int
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;

using namespace std;

ll power(ll a,ll n,ll d)
{
    ll res = 1;
    while(n)
    {
        if(n%2 == 1)
        {
            res = ((res % d) * (a % d))% d;
            n--;

        }
        else
        {
            a = ((a%d) * (a%d))%d;
            n = n / 2;
        }

    }
	return res;
}
ll gcd(ll A,ll B,ll N)
{
    if(A == B)
        return (power(A,N,mod)+power(B,N,mod))%mod;
    ll candidate = 1;
    ll num = A - B;

    for(ll i = 1;i * i <= num;i++)
    {

        if(num % i == 0)
        {
            ll temp = (power(A,N,i) + power(B,N,i))%i;
            if(temp == 0) {candidate = max(candidate,i); }

            temp = (power(A,N,num/i) + power(B,N,num/i))%(num/i);
            if(temp == 0) candidate = max(candidate,num/i);
        }
    }
    return candidate % mod;

}
int main()
{
    ll A,B,N,t;

    cin >> t;

    while(t--)
    {
        cin >> A >> B >> N;
        cout << gcd(A,B,N) << endl;
    }

}
