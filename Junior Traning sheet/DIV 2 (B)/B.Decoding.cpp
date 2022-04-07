#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <string>

using namespace std;
int main()
{

	int n;
	cin >> n;

	string s;
	cin >> s;
	reverse(s.begin(), s.end());
	//cout << s << endl;
	char p[20000] ;
	int j  = 0;
	int size =  s.size();
	for (int i = 0; i < size; i++)
	{
		int k = i + 1;
		if (k % 2 == 1)
		{

			p[j] = s[i];


			j++;
		}


	}
	for (int i = size - 1; i >= 0; i--)
	{
		int k = i + 1;
		if (k % 2 == 0)
		{

			p[j] = s[i];


			j++;
		}


	}
	for (int i = strlen(p) - 1; i >= 0 ; i--)
	{
		cout << p[i] ;

	}


}
