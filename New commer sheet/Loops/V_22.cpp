#include <iostream>
using namespace std;

int main()
{
    int n,k = 0;

    cin >> n;

  for(int i = 1;i <= n;i++)
  {

      int r = i *4;
      for(int j = k+1;j <= r;j++)
      {
          k = j;

          if(j == i*4)cout << "PUM" << endl;
          else  cout << j << " ";
      }

  }
  return 0;
}
