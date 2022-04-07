
#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
class STRING
{
    char *str;
public:
    STRING(int n)
    {
        str = new char[n];
    }
    STRING()
    {
        str = new char[1000];
    }
    int Size()
    {
        return strlen(str);
    }
    char &operator[](int i)
    {
        return str[i];
    }
    STRING operator=(char *str2)
    {
        int i;
        int s = strlen(str2);
        cout << s << endl;
        for(i=0;i<s;i++)
        {
          str[i] = str2[i];
        }
        return *this;
    }

      friend STRING operator+(STRING str,STRING str2);
      friend STRING operator+(char *str2,STRING str);/// 6th cheapter friend operator +
      friend STRING operator+(STRING str,char *str2);
      friend ostream &operator<<(ostream &stream,STRING str2);/// 8th cheapter New file xmpl30
};
 STRING operator+(STRING str,STRING str2)
    {
      int i=0,j=0;
      STRING T;
      cout << str.Size() << " " << str2.Size() << endl;
      for(i=0;i<str.Size();i++)
      {
          T[i] = str[i];
      }
      for(j=0;j<str2.Size();i++,j++)
      {
          T[i] = str2[j];
      }
      return T;
    }
    STRING operator+(char *str2,STRING str)
    {
      int i=0,j=0;
      STRING T;
      for(i=0;i<strlen(str2);i++)
      {
          T[i] = str2[i];
      }
      for(j=0;j<str.Size();i++,j++)
      {
          T[i] = str[j];
      }
      return T;
    }
    STRING operator+(STRING str,char *str2)
    {
     int i=0,j=0;
      STRING T;
      for(i=0;i<str.Size();i++)
      {
          T[i] = str[i];
      }
      for(j=0;j<strlen(str2);i++,j++)
      {
          T[i] = str2[j];
      }
      return T;
    }
    ostream &operator<<(ostream &stream,STRING str2)
    {
      int i=0;
      cout << str2.Size() << endl;
      for(i=0;i<str2.Size();i++)
      {
          cout << str2[i];
      }
      return stream;
    }
int main()
{
    STRING s1(10), s2(20), s3;
    s1 = "Hello";
    s2 = "World";
    s3 = s1 + ", " + s2 + "!";

    cout << s3 << endl; /// Output should be “Hello, World!”
}


