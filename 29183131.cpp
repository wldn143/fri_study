//시간초과뜸
#include <iostream>
#include <algorithm>

using namespace std;

//-1,0,2,3,9   0 -1 -1 4 1

int main() {

	int N,M;
	unsigned long  arr[1000000];
	unsigned long  arr2[1000000];
	int d;
	
	cin >> N>>M; //N은 입력받을 원소 개수
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + N); //배열 정렬됨

	
	for (int k = 0; k < M; k++)
	{
		cin >> d; 
		for (int j = 0; j < N; j++)
		{
			if (d == arr[j]) {
				arr2[k] = j;
				break;
			}

			if (j == N - 1) {
				if (d != arr[N - 1]) {
					arr2[k] = -1;
					break;
				}
			}
		}
	}

	for (int i = 0; i < M; i++)
	{
		cout << arr2[i]<<"\n";
	}
}
