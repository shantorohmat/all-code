#include <iostream>
using namespace std;
#define ll long long int
int main()
{
    ll n,x;
    cin >> n >> x;
    char a;
    ll s = x,k,counT = 0;
    for(int i = 0;i < n;i++)
    {
        cin >> a >> k;


        if(a == '+'){
            s += k;
            //cout << s << endl;
        }
        else if(a == '-')
        {
            if(s >= k)
            {
                s -= k;
            }
            else counT++;
           // cout << s << endl;
        }
    }
    cout << s <<" " << counT << endl;
}
