#include <iostream>
#include <set>
using namespace std;
 bool take[10007];
int main()
{
    int p,q,l,r;
    cin >> p >> q >> l >> r;


    for(int i = 0;i < p;i++)
    {
        int a,b;
        cin >> a >> b;
        for(int j = a;j <= b;j++)
        {
            take[j] = true;

        }
    }

    int cnt = 0;
    set<int>s;

        for(int j = 0;j < q;j++)
        {
            int x,y;
            cin >> x >> y;
            for(int k = x; k <= y;k++)
            {
                int xx = l;
                while(xx <= r)
                {
                    //int zz = xx + k;
                    if(take[xx+k])
                    s.insert(xx);
                    xx++;

                }
            }
        }

    cout << s.size() << endl;

}
