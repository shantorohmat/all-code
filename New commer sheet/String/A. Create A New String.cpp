/// length()  || size()

#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
     char s[1000001],t[1000001];

    scanf(" %[^\n]",s);

    scanf(" %[^\n]",t);

    int len_1 = strlen(s);

    int len_2 = strlen(t);

    cout << len_1 << " " << len_2 << endl;

    cout << s << " " << t << endl;

    return 0;
}
