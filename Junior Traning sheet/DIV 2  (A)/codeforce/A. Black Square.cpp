 #include <iostream>
 #include <cstring>
 #include <string>
 #include <stdio.h>
 using namespace std;
 int main()
 {
     int arr[10007];

     int brr[5];

     for(int i = 1;i <= 4;i++)
     {
         cin >> brr[i];
     }
//
//     string s;
//
//     getline(cin,s);
//
     char s[100007];
     scanf(" %[^\n]",s);

     int sum = 0;

     for(int i = 0;i < strlen(s);i++)
     {
         int a = s[i] - 48;
         sum += brr[a];

     }
     cout << sum << endl;
 }
