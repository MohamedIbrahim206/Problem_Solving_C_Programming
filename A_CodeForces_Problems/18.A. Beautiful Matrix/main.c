#include<stdio.h>
#include<stdlib.h>

int main() {
	int arr[5][5];
	int row=0, col=0;
	int result = 0;
	for (int i = 0; i < 5; i++)
	{

		for (int j = 0; j < 5; j++)
		{
			scanf_s("%d", &arr[i][j]);
			if (arr[i][j] == 1) {
				row = i;
				col = j;
			}

		}
	}
	row++;
	col++;
	result = (abs(row - 3) + abs(col - 3));
	printf("%d", result);

	return 0;
}
