#include <stdio.h>

int main() {

	int n; // The number of stones int the table
	scanf_s("%d", &n);
	getchar(); // Consume the remaining newline character
	char colors[55];
	fgets(colors, sizeof(colors), stdin);
	int result = 0;


		for (int i = 0; i < n - 1; i++)
		{
			if (colors[i + 1] == colors[i]) {
				result++;
			}

		}

	printf("%d", result);

	return 0;
}
