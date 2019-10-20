#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int arr[N];
	for (int i = 0; i < N; i++) {
		arr[i] = rand() % 100 + 1;
		cout << arr[i] << "  ";
	}
	N--;
	int arr1[N];
	for (int i = 0; i < N; i++) {
		arr1[i] = arr[i + 1];
	}
	int M = N / 2;
	int arr2[M];
	for (int i = 0; i < N; i++) {
		if (i % 2 == 1 && i > 0) {
			arr2[i / 2] = arr1[i - 1] + 2;
		}
	}

	int j = 0, n = 0, i = 0;
	int arr3[M + N];
	while (j < M) {
		arr3[i] = arr1[n];
		arr3[i + 1] = arr1[n + 1];
		arr3[i + 2] = arr2[j];
		i += 3;
		n += 2;
		j++;
	}
	if (N % 2 == 1) {
		arr3[N + M - 1] = arr1[N - 1];
	}
	cout << endl;
	for (i = 0; i < (N + M); i++) {
		cout << arr3[i] << "  ";
	}

	return 0;
}
