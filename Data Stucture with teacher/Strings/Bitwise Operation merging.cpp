
#include <iostream>
using namespace std;
int main()
{
    unsigned int z = 99;/// আমাদের লেফট সিফট   অর রাইট সিফট  ইউজ করার ক্ষেত্রে  সব সময়  unsigned use  করতে হবে ।
    ///Our Left Shift or Right Shift will be used unsigned all the time.
     int x = 0 , p = 23 - 4 + 1;

     for(int i = 0;i < p;i++)
     {

         x = x << 1 | 1;/// x 1 bit করে  বামে যাবে এবং ১ এর সাথে  OR-ing করে. x এর বিটে ১ করে  enter হবে।
        ////x 1 bit to the left and 1 to OR-ing. 1 will be entered in the bit of x.

     }

     x =  x << 4;

     x = x & z;/// merging

     cout << x << endl;
}
