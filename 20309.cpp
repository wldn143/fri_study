#include <iostream>
using namespace std;

int n;

int main()
{
	int count = 0;
	bool res = true;
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> n;//숫자 열 길이
	for (int i = 1; i <= n; i++)
	{
		int k;
		cin >> k;
		count++;

		if ((count%2)!=(k%2))
			res = false;
	}
	if (res == false)
		cout << "NO";

	else
		cout << "YES";
	
}
