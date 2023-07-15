#include <stdio.h>
#include <string.h>

int check_exist_digit(int number, int digit) {

	while (number != 0) { // 452
		int n = number % 10;
		if (digit == n) {
			return 1;
		}
		number=number / 10;
	}
	return 0;
}
int main()
{
	//printf("%d", check_exist_digit(542, 2));
	int n, k;
	scanf_s("%d %d", &n, &k);
	int flag = 1;
	int result = 0;
	int number;

	for (int j = 0; j < n; j++)
	{
		scanf_s("%d", &number);
		for (int i = 0; i <= k; i++)
		{

			if (check_exist_digit(number, i) == 0) {
				flag = 0;
				break;
			}

		}
		if (flag == 1) {
			result++;
		}
		flag = 1;

	}
	printf("%d", result);

	return 0;
}
