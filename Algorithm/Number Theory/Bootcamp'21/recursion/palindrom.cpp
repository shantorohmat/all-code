#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string s;
bool palindrome(int i,int n)
{
    if(i>=n) return true;
    if(s[i] == s[n]) return true;
    else return false;
}
string rev(int n)
{
    if(n < 0) return "";
    return  s[n] + rev(n-1);

}
int main()
{

   cin >> s;
   int n = s.size() ;
   cout << rev(n-1) << endl;
   if(palindrome(0,n-1)) cout << "palindrome" << endl;
   else cout << "Not Palindrome " << endl;
}
