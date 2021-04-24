#include <iostream>
#include<string> //공부좀..
using namespace std;

int main()
{
	int n;
	
	vector<string> v;
	
	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; i++)
	{
		string s;
		getline(cin,s);
		//왜 한 문장을 덜 받아? getline이 문제 cin.ignore()이 필수
		
		bool flag = true;
		
		for (int i = 0; i < s.length() / 2; i++)
		{
			if (toupper(s[i]) != toupper(s[s.length() - i - 1]))
			{
				flag = false;
				break;
			}
		}
		if (flag)
			cout << "Yes\n";
		else
			cout << "No\n";
  }
}
