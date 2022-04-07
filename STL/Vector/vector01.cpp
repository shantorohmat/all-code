///sort

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
   int s[] = {3,1,2,4,5,6};///0 1 2 3 4 5

   sort(s,s+3);/// 3 er ag porjonto sort hobe 1 2 3(0 1 2)


   for(int i = 0;i < 6;i++)
   {
       cout << s[i] << endl;
   }

}
