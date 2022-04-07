///time limit O(log(logn))
/// 5000000 or 5M prime number where we found its 90000000
#include <iostream>
#include <vector>
using namespace std;

bool s[90000001];
vector <int>v;

void sieve()
{
    int maxn = 90000000;

    s[0] = s[1] = true;

    for(int i = 2;i*i <= maxn;i++)
    {
        if(s[i] == false)
        {
            for(int j = i*i;j <= maxn;j+=i)
                s[j] = true;
        }
  }

  for(int i = 2;i <= maxn;i++)
  {
      if(s[i] == false)
      {
          v.push_back(i);

      }
  }
}

int main()
{
    int n,a;

    cin >> n;

    sieve();
    while(n--){
    cin >> a;
    cout << v[a-1] << endl;
    }

}
