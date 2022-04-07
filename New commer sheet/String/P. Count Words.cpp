#include <iostream>
#include <cstring>
#include <stdio.h>
#include <string>
using namespace std;
int main()
{

    int count = 0;

    char s[1000001];

    scanf(" %[^\n]",s);



    char* word = strtok(s,",.?;! ");

    while(word != NULL)
    {
        if(strlen(word) > 0)
        {
            count++;
        }

        word = strtok(NULL,",.?;! ");
    }

    cout << count << endl;


}
