#include<stdio.h>

int main() {
	int n; // The number of columns
	scanf_s("%d", &n);
	int arr[100];
	for (int i = 0; i < n; i++) // 3 2 1 2 5
	{
		scanf_s("%d", &arr[i]);

	}
	for (int i = 0; i < n; i++) //3
	{
		int min = arr[i]; // 3
		for (int j = i; j < n-1; j++)//3
		{
			if (arr[j + 1] < min) {
				min = arr[j + 1]; // 2 1
				int temp = arr[j + 1]; // 2 1
				arr[j + 1]=arr[i]; //3 1
				arr[i] = temp; // 2
			}

		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
