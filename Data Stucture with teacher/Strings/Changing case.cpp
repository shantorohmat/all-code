#include <iostream>
using namespace std;
int main()
{
    char ch[1000];
    int n;

    cout  << "How many char you want to input : " ;

    cin >> n;

    for(int i = 0;i < n;i++)
    {
        cin >> ch[i];

        if(ch[i] >= 65 && ch[i]  <= 90)
        {
            ch[i] += 32;
        }
    else if(ch[i] >= 97 && ch[i] <= 122)
    {
        ch[i] -= 32;
    }

    cout  << ch[i] ;
    }
    cout << endl;


}
