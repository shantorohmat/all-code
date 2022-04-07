#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n,q,a,b;

     char c;

    cin >> n ;

    scanf("%d ",&q);

    string s;

    getline(cin,s);

    while(q--)
    {
        string ss;

        cin >> ss;

        if(ss == "pop_back")
        {
            s.erase(s.begin()+s.size()-1,s.end());
            //cout << s << endl;

        }
        else if(ss == "front")
        {
            cout << s[0] << endl;
        }
        else if(ss == "back")
        {
            cout << s[s.size() -1] << endl;
        }
        else if(ss == "sort")
        {
            cin >> a >> b;

            if(a > b)swap(a,b);
            a--;

            sort(s.begin()+ a,s.begin()+b);

            /*for(int i = a;i <= b;i++)
                cout << s[i];*/
        }

        else if(ss == "reverse")
        {
            cin >>a >>b;

            if(a > b) swap(a,b);
            a--;

            reverse(s.begin()+a,s.begin()+b);

        }
        else if(ss == "print")
        {
            cin >> a;

            cout << s[a-1]<< endl;
        }
        else if(ss == "substr")
        {
            cin >> a >> b;

            if(a > b) swap(a,b);

            for(int i = a-1;i < b;i++)
            {
                cout << s[i] ;
            }
            cout << endl;
        }
        else if(ss == "push_back")
        {

            cin >> c;

            s += c;
        }

    }

}
