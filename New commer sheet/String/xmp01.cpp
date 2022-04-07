#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;
int main()
{
  int n,L,R,T,q;
  cin>>n;
  vector<int>v(n);
  vector<int>::iterator it;

  ///int p[n];

  for(int i=0;i<n;i++)
  {
      ///cin>>p[i];
      ///v.push_back(p[i]);
      cin >> v[i];
  }
  cin>>q;
  for(int j=0;j<q;j++)
  {
      cin>>T>>L>>R;
      if(T==1)
      {
          reverse(v.begin()+(L-1),v.begin()+R);
          for(it=v.begin();it!=v.end();it++)
          {
              cout<<*it<<" ";
          }
      }
      else if(T==2)
      {
          sort(v.begin()+(L-1),v.begin()+R);
          for(it=v.begin();it!=v.end();it++)
          {
              cout<<*it<<" ";
          }
      }
      cout<<endl;
  }


    return 0;
}
