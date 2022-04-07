#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
    string s;
    cin >> s;
    int k = 0;
    for(int i = 0;i < s.size();i++)
    {
        k++;
        stringstream geek(s);
        int n = 0;
        geek >> n;
        if(n%2 == 0)
        {
            cout << k
            break;
            
        }

    }
    
   

    cout << n << endl;
    }
}