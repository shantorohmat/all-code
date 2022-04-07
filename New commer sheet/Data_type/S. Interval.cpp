
 #include <iostream>
 using namespace std;

 int main()
 {
     double s;

     cin >> s;

     if(s >= 0.00 && s <= 25.00)
        cout << "Interval [0,25]" << endl;
     else if(s > 25.00 && s <= 50.00)
        cout << "Interval (25,50]" << endl;
     else if(s > 50.00 && s <= 75.00)
        cout << "Interval (50,75]" << endl;
     else if(s > 75.00 && s <= 100.00)
        cout << "Interval (75,100]" << endl;
     else cout << "Out of Intervals" <<endl;

 }
