
#include <iostream>
#include <string>
#include <string.h>

using namespace std;
int index[1000000];
int l = 1000000;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int temp = 0;

    int k = 0 ;

    for(int i = 10 ; i < n;i++)
    {
        sum = 0;
        temp = i;
        while(temp > 0)
        {
            sum = sum * 10 + temp%10;
            temp = temp / 10;

        }
        if(i == sum)

        cout << i  << " ";

    }

}

