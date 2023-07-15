#include<stdio.h>

int main() {

	int calories[4];
	char a[100005];
	int result = 0;
	for (int i = 0; i < 4; i++)
	{
		scanf_s("%d", &calories[i]);

	}
	getchar();
	fgets(a, sizeof(a), stdin);
	for (int i = 0; a[i]!='\0'; i++)
	{
		if (1 == (a[i] - '0')) {
			result += calories[0];
		}
		else if (2 == (a[i] - '0')) {
			result += calories[1];
		}
		else if (3 == (a[i] - '0')) {
			result += calories[2];
		}
		else if (4 == (a[i] - '0')) {
			result += calories[3];
		}
	}
	printf("%d", result);


	return 0;
}
