#include<stdio.h>

int main() {

	int a; // The weight of limak
	int b; // The weight of Bob
	scanf("%d %d", &a, &b);
	int result=0;
	if (a == b) {
		result = 1;
	}
	else if (a > b) {
		result = 0;
	}
	else {
		while (b >= a) {
			a *= 3;
			b *= 2;
			result++;
		}
	}
	printf("%d", result);
	return 0;
}
