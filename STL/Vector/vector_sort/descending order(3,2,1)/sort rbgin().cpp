
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;
int main()
{
    double n,t1,t2,k;
    cin >> n >> t1 >> t2 >> k;
    double a,b;
    //cout.precision(2);
    double j = k/100;
    int i = 1;
    vector <pair<double,int>>v;

    while(n--)
    {

        cin >> a >> b;
        double ax = a*t1 - (a*t1*j);
        double az = b*t2;
        double as = az + ax;



        double bx = b*t1 - (b*t1*j);
        double bz = a*t2;
        double bs = bx+bz;
        double  zz = max(as,bs);

        //cout << fixed << zz << endl;
        v.push_back(make_pair(zz,i));


        i++;


    }
    sort(v.rbegin(),v.rend());

    for(auto j = 0 ;j < v.size();j++)
    {
        cout << v.at(j).second << " " <<  v.at(j).first<< endl;
    }


}

