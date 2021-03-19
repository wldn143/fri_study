#include <iostream>
#include <string>
using namespace std;
string s;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int happy = 0, sad = 0;
	getline(cin, s);
	for (int i = 0; i < s.size() - 2; i++) {
		if (s[i] == ':' && s[i + 1] == '-')
		{
			if (s[i + 2] == ')')
				happy++;
			else
				sad++;
		}
	}
	if (happy == 0 && sad == 0)
		cout << "none\n";
	else if (happy == sad)
		cout << "unsure\n";
	else if (happy > sad)
		cout << "happy\n";
	else if (happy < sad)
		cout << "sad\n";

}
//for (int i = 0; i < s.length() - 2; i++) {
//	string temp = s.substr(i, 3);
//	if (temp == ":-)")
//	{
//		happy++;
//	}
//	if(temp == ":-(")
//		sad++;
//	}
//}


