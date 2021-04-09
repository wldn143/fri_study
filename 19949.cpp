#include <iostream>
#include<string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	unsigned long long n;
	int count = 0;

	cin >> n;
	for (int i = 0;i<64;i++)
	{
		if (n % 2 == 1)
			break;
		else
			n = n / 2;
		count++;
		
	}

	cout << 64 - count;
}
