#include <stdio.h>

int main() {
	int n; // The number of problems
	scanf("%d", &n);
	int petya_view,vasya_view,tonya_view;
	int result = 0;
	int a = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &petya_view);
		if (petya_view == 1) {
			a++;
		}
		scanf("%d", &vasya_view);
		if (vasya_view == 1) {
			a++;
		}
		scanf("%d", &tonya_view);
		if (tonya_view == 1) {
			a++;
		}
		if (a >= 2) {
			result++;
		}
		a = 0;

	}
	printf("%d", result);
	return 0;
}
