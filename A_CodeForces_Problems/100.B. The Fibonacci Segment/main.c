#include<stdio.h>

int main() {

	int n;
	scanf_s("%d", &n);
	int arr[100000];
	int length = 0;
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);

	}
	if (n == 1) {
		printf("%d",1);
	}
	else {
		for (int i = 2; i < n; i++) // 10 20 30 10 40 50
		{
			//printf("i = %d \n", i);
			if (arr[i] == arr[i - 1] + arr[i - 2]) {
				length++; // 1
			}
			if(arr[i] != arr[i - 1] + arr[i - 2]||(i==n-1)) {
				//printf("yes\n");
				if (length > count) {
					count = length;
				}
				length = 0;
			}
			//printf("len= %d \n", length);
			//printf("cou= %d \n", count);

		}
		printf("%d", (count + 2));


	}

	return 0;
}
