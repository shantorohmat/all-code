#include <iostream>
using namespace std;

double ok(int x)
{
    double low,high,mid;
	low=0.0;
	high=x;
	while (high-low>.0001){
		 mid=(low+high)/2;
		//cout <<  low << " " << high << " " << mid << " " <<  mid*mid <<endl;
		if(mid*mid>x)
			high=mid;
		else
			low=mid;
	}

	cout << mid << " " << mid*mid << endl;
        return high;


}
int main()
{
    int x;
    cin >> x;
    double z = ok(x);
    cout << z <<endl;




}
