#include <iostream>
#include <string>
using namespace std;

int q, r, question;
string rules[60]; 

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);

	cin >> q;
	cin.ignore();
	for (int i = 1; i <= q; i++) {
		getline(cin, rules[i]);
	}

	cin >> r;
	for (int i = 1; i <= r; i += 1) {
		cin >> question;
		if (question<1 || question>q) {
			cout << "Rule " << question << ": No such rule\n";
		}
		else {
			cout << "Rule " << question << ": " << rules[question] << '\n';
		}
	}

}
