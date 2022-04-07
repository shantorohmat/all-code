#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{

	//sample input : p=3+8*2
	//sample output: p = 19

	//sample input : p=3+8.5*2
	//sample output : p = 20
	//don't give any space
	//This code clearly run in my computer with proper output
	// what() : stod because of input

//#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#endif
	string s;
	cin >> s;
	s += " ";

	string t = "", sec = "", f = "";

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '*')
		{
			for (int j = i + 1; j < s.size(); j++)
			{
				if (s[j] == ' ')
					break;
				else
					t += s[j];
			}
			//cout <<  " third : " <<  t << endl;

		}

	}
	for (int i = 0; i < s.size(); i++)
	{

		if (s[i] == '+')
		{

			for (int j = i + 1; j < s.size(); j++ )
			{
				if (s[j] == '*' )
					break;
				else
					sec += s[j];

			}
			//cout << "sec : " << sec << endl;


		}

	}
	for (int i = 0; i < s.size(); i++)
	{

		if (s[i] == '=')
		{

			for (int j = i + 1; j < s.size(); j++)
			{

				if (s[j] == '+')
					break;
				else f += s[j];
			}
			//cout << "first : " << f << endl;
		}

	}
	string k = "5";
	if (f.size() != 1 || sec.size() != 1 || t.size() != 1)
	{
		double qs = stod(f);
		double qr = stod(t);
		double qp = stod(sec);
		double ans = qr * qp;
		double ans1 = ans + qs;
		cout << "p = " << ans1 << endl;
	}
	else
	{
		int  qs = stoi(f);
		int  qr = stoi(t);
		int  qp = stoi(sec);
		int  ans = qr * qp;
		int ans1 = ans + qs;
		cout << "p = " << ans1 << endl;
	}





}


/*
#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{

    //sample

//#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#endif
	string s;
	cin >> s;
	s += "M";

	string t = "", sec = "", f = "";

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '*')
		{
			for (int j = i + 1; j < s.size(); j++)
			{
				if (s[j] == 'M')
					break;
				else if(s[j] == ' ')
                    continue;
                else
					t += s[j];
			}
			cout <<  " third : " <<  t << endl;

		}

	}
	for (int i = 0; i < s.size(); i++)
	{

		if (s[i] == '+')
		{

			for (int j = i + 1; j < s.size(); j++ )
			{
				if (s[j] == '*' )
					break;
				else if(s[j] == ' ')
                    continue;
                else
					sec += s[j];

			}
			cout << "sec : " << sec << endl;


		}

	}
	for (int i = 0; i < s.size(); i++)
	{

		if (s[i] == '=')
		{

			for (int j = i + 1; j < s.size(); j++)
			{

				if (s[j] == '+')
					break;
				else if(s[j] == ' ')
                    continue;
                else
                    f += s[j];
			}
			cout << "first : " << f << endl;
		}

	}
	string k = "5";
	if (f.size() != 1 || sec.size() != 1 || t.size() != 1)
	{
		double qs = stod(f);
		double qr = stod(t);
		double qp = stod(sec);
		double ans = qr * qp;
		double ans1 = ans + qs;
		cout << "p = " << ans1 << endl;
	}
	else
	{
		int  qs = stoi(f);
		int  qr = stoi(t);
		int  qp = stoi(sec);
		int  ans = qr * qp;
		int ans1 = ans + qs;
		cout << "p = " <<ans1 << endl;
	}





}
*/


