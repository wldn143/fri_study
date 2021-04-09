#include <iostream>
#include<string>
#include<cstdlib>
using namespace std;
int n;
char a[1000000];
char c;
char d;
int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	
	srand((unsigned)time_t(0));
	cin >> n;
	c = (char)((rand() % 26) + 97);
	d = (char)((rand() % 26) + 97);
	
	if (n % 2 == 1)//문자열 길이 n이 홀수면
	{
		for (int i = 0; i < n / 2; i++)
		{
			a[i] = c;
		}
		for (int j = (n / 2) + 1; j< n; j++)
		{
			a[j] = c;
		}
		a[n / 2] = d;
		
		for (int i = 0; i < n; i++)
		{
			cout << a[i];
		}
	}

	 if (n % 2 == 0)//문자열 길이가 짝수
	{
		 for (int i = 0; i <n; i++)
		 {
			 a[i] = c;
		 }
		 for (int i = 0; i < n; i++)
		 {
			 cout << a[i];
		 }
	}
	

}
