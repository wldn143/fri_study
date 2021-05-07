#include<iostream>
using namespace std;


int main() {
	int N;
	int arr[10000];
	int total = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		total = total + arr[i];
	}

	for (int i = 0; i < N; i++)
	{
		if (total - arr[i] == arr[i])
		{
			cout << arr[i];
			break;
		}
		if (i == N-1)
		{
			if (total - arr[N-1] != arr[N-1])
			{
				cout << "BAD";
				
			}
		}
	}

}
