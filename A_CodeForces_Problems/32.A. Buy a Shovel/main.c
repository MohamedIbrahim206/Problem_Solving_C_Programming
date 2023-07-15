#include<stdio.h>

int main() {

	int k; // The price of one shovel
	int r; // The denomination of the coin in Polycarp's pocket
	int i = 1;
	scanf_s("%d %d", &k, &r);
	while (((k*i) % 10 != 0) && ((k*i - r) % 10 != 0)) {
		i++;
	}
	printf("%d", i);
	return 0;
}
