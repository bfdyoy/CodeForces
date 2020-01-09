#include<iostream>

#define ll long long
using namespace std;
int main()
{
	string s1, s2,z;
	cin >> s1 >> s2;
	for (int  i = 0; i < s1.length(); i++)
	{
		if (s1[i] < s2[i])
		{
			cout << -1; return 0;
		}
		else if (s1[i] == s2[i])
			z += s1[i];
		else
			z += s2[i];
	}
	cout << z;
}
