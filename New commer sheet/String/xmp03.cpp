///4.c

#include <iostream>
#include <map>
#include <algorithm>
#include <iterator>
using namespace std;
int main()
{
  int n;

  string a,b,c;

  cin>>n;

  map<string,string> m;

  map<string,string>::iterator it;

  for(int i=0;i<n;i++)
  {
      cin>>a>>b;
      m.insert(make_pair(a,b));
  }
  cout<<"Go:";
  cin>>c;
  for(it=m.begin();it!=m.end();it++)
  {
      if(c==it->first)
      {
          cout<<"find:"<<it->second<<endl;

      }
      else if(c==it->second)
      {
          cout<<"find:"<<it->first<<endl;
      }
  }


    return 0;
}
