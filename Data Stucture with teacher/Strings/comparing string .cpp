#include <iostream>
#include <string>
using namespace std;
int main()
{
  cout << "This program is to compare two string : "<<endl;

  while(1){
  string s,p;

  cin >> s >> p;
  int i = 0,j = 0;

  for( i  = 0,j = 0 ;s[i] != '\0' && p[j] != '\0';i++,j++)
  {
      if(s[i] != p[j])
        break;

  }
  if(s[i] == p[j]) cout << "Equal" <<  endl;
  else if(s[i] < p[j])
    cout << "Smaller" << endl;
  else cout << "greater" << endl;
  }

}
