#include <iostream>
#include <string>
#include <cstring>
#include <string.h>
using namespace std;

string s2;
string s1;
double cnx = 0,cnt= 0;
double k = 0,x = 0;
double xcn = 0;
void dp(int i,int sum)
{
    if(i > x)
    {
         int bx = sum + cnx;
         xcn++;
        if(bx == cnt)
        {
            k++;
        }
        return ;
    }
    dp(i + 1,sum + 1);
    dp(i + 1,sum - 1);
}

int main()
{
    cout.precision(12);


   cin >> s1 >> s2;
   for(int i = 0 ;i < s1.size();i++)
   {
       if(s1[i] =='+')
        cnt++;
       else cnt--;
   }


   for(int i = 0;i < s2.size();i++)
   {
       if(s2[i] == '+')
        cnx++;
       else if(s2[i] == '-')
        cnx--;
      else x++;
   }
   dp(1,0);
   cout << fixed << k/xcn << endl;



}
