#include <iostream>
using namespace std;

int main()
{
    int n,count = 0,opr = 0;

    cin >> n;

    int *p = new int [n];

    for(int i = 0;i < n;i++)
    {
        cin >> p[i];
    }

    bool y = true;

    while(y)
    {

      for(int i = 0;i < n;i++)
        {

            if (p[i] % 2 == 1)
            {
                if(opr > 0)
                {
                    count = 1;

                    y = false;

                    break;
                }
                else{
                count = 1;

                opr = 0;

                y = false;

                break;
                }
            }
        }




        if(count == 0)
        {
            for(int i = 0;i < n;i++)
            {
                p[i] = p[i] / 2;
            }

                opr++;

                y = true;

        }

    }

    cout << opr << endl;

    return 0;
}
