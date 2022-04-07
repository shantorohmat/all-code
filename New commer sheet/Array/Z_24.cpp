


#include <iostream>
#include <map>
//#include <algorithm>
using namespace std;

int main(){

int n, m;

	cin >> n >> m;

	map<int, int>mp;

	for (int i = 1; i <= n; i++) {

		int x; cin >> x;

		mp[x] = 1;
	}

	while (m--) {

		int x;

		cin >> x;

        if (mp[x])

        cout << "found\n";

		else cout << "not found\n";
	}
       return 0;
}
