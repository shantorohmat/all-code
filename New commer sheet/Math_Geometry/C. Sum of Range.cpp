#include <iostream>
#define ll long long int
using namespace std;

inline void sum(ll a,ll b)
{
    ///cout << a << " " << b << endl;

    ll sum = 0;
     sum = ((b-a + 1)*(a +b))/2;
    cout << sum << endl;
}

ll sumNatural(ll n)///sum of all even number
{
    ll sum = (n * (n + 1));
    return sum;
}

// Function to return sum
// of even numbers in range L and R
void sumeve(ll l, ll r)
{
    ll sum =  sumNatural(r/2) - sumNatural((l-1) / 2);

    cout << sum << endl;
}




ll sumOddx(ll n)
{
    ll terms = (n + 1) / 2;
    ll sum = terms * terms;
    return sum;
}

// Function to return the sum
// of all odd numbers in range L and R
void sumodd(ll l, ll r)
{
    ll sum = sumOddx(r) - sumOddx(l - 1);

    cout << sum << endl;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a,b;

    cin >> a >> b;

    int r;

    if(a > b){
    r = a;
    a = b;
    b = r;

    }

    //cout << a << " " << b << endl;

    sum(a,b);

    sumeve(a,b);

    sumodd(a,b);

    return 0;
}
