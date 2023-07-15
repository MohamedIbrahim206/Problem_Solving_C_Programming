#include<stdio.h>

int main() {

	int n; // The number of friends
	int h; // The height of fence
	int a; // height of each friend
	scanf("%d %d", &n, &h);
	int result = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (a > h) {
			result += 2;
		}
		else {
			result++;
		}

	}
	printf("%d", result);
	return 0;
}
