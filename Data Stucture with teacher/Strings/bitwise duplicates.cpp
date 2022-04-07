#include <string>
#include <iostream>
using namespace std;
int main()
{
   cout <<  " Enter a word : " << endl;

   char s[10];

   cin >> s;

    int h = 0, x = 0,f = 0;

   for(int i = 0; s[i] != '\0';i++)
   {
       //x = 1;
       x = x << 1 | 1 ;

       x = x << (s[i] - 'a');

       if(x & h > 0)
       {
           f =1;
           cout << "duplicates" << endl;
           break;

       }
       else h = x | h;
   }
   if(f == 0)
   {
     cout << "Not duplicates " << endl;
   }

}
