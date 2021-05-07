#include <iostream>
using namespace std;
 
 
int main(void) {
    int n;
    int dp[1005][3];
    cin >> n;
 
    dp[1][0] = 0;
    dp[1][1] = 1;
    dp[1][2] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < 3; j++) {
            dp[i][j] = dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2];
        }
    }
 
    cout << dp[n][0] << endl;
}

//그냥 점화식 이용하면
#include<iostream>
#include<cstring>
using namespace std;

const int MAX = 33333 + 1;
const int MOD = 1000000009;
int N;
long long cache[MAX];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	cache[2] = 2;

	for (int i = 3; i <= N; i++)
		cache[i] = (cache[i - 1] * 3) % MOD;
	cout << cache[N] << "\n";
	return 0;

}
