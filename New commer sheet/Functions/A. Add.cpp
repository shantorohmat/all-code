 #include <iostream>
 using namespace std;

 int add(int s,int g)
 {
     return s+g;
 }

 int main()
 {
     int a,b;

     cin >>a >> b;

     int result = add(a,b);

     cout << result << endl;

     return 0;
 }
