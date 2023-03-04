#include <bits/stdc++.h>
using namespace std;
string decToHexa(int n)
{
	string answ = "";
	while (n != 0) {
		int rem = 0;
		char ch;
		rem = n % 16;
		if (rem < 10) {
			ch = rem + 48;
		}
		else {
			ch = rem + 55;
		}
		answ += ch;
		n = n / 16;
	}
	int i = 0, j = answ.size() - 1;
	while(i <= j)
	{
	swap(answ[i], answ[j]);
	i++;
	j--;
	}
	return answ;
}
int main()
{
	int n;
    cin >> n;

	cout << decToHexa(n);

	return 0;
}