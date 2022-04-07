#include <iostream>
#include <string>
#include <cstring>
#include <string.h>
#define ll long long int
using namespace std;
int main()
{
    string s;
    cin >> s;
    ll a = s.size();
    ll srt = 0;
    ll nd = a;
    ll sum = 0;
    ll dif = 0 ;
    for(ll i = 0;i < a;i++)
    {
        for(ll j = i;j < a ;j++){

            if(s[j] == 'b' && s[j+1] == 'e' && s[j+2] == 'a' && s[j+3] == 'r')
            {
                srt = i;
                nd = j+3;
                break;

            }
        }
       // cout << "srt: " << srt << "  " << "END : " << nd <<  " " << a - nd << endl;
       if(srt == dif)
            sum += a - nd;
            dif++;

    }
//    if(sum == 5000 || sum == 4999)
//    cout << 0 << endl;
     cout << sum << endl;
}
