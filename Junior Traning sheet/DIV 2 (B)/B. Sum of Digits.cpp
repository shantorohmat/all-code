#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int sum  = 11,cnt = 0;
    if(s.size() < 2)
    {
        cout << 0 << endl;
        return 0;
    }


    while(sum >= 10)
    {
        sum = 0;
         for(int i = 0;i < s.size();i++)
        {
            sum += s[i] - '0' ;

        }
        s = to_string(sum);
        cnt++;

    }
    cout << cnt << endl;







}
