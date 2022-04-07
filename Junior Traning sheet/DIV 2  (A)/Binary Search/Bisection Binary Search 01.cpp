#include <iostream>
using namespace std;
int x;
double ok(double mid)
{
   if(mid*mid>x) return 1;
   return 0;


}
int main()
{

    cin >> x;
     double low,high,mid;
	low=0.0;
	high=x;
	//while (high-1>low){
    while (high-low>.0001){
		 mid=(low+high)/2;
		cout <<  low << " " << high << " " << mid << " " <<  mid*mid <<endl;
		if(ok(mid))
			high=mid;
		else
			low=mid;
	}

	cout << mid << " " << mid*mid << endl;
	cout <<high << endl;





}

