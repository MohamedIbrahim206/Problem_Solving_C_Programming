#include<stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);
	int arr[100000];
	int result = 1;
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);

	}
	for (int i = 0; i < n-1; i++)
	{
		if (arr[i + 1] != arr[i]) {
			result++;
		}

	}
	printf("%d", result);
	return 0;
}
