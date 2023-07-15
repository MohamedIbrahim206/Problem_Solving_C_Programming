#include<stdio.h>
int main() {
	int a; // Number of soliders in the line
	int soldiers_height[100];
	int max, min,index_of_max_soldier=0,index_of_min_soldier=0,result=0;

	scanf_s("%d", &a);
	for (int i = 0;i < a;i++) {
		scanf_s("%d", &soldiers_height[i]);

	}
	max = soldiers_height[0];
	min = soldiers_height[0];
	for (int i = 0;i < a-1;i++) {
		if (soldiers_height[i + 1] > max) {
			max = soldiers_height[i + 1];
			index_of_max_soldier = i + 1;
		}
		if (soldiers_height[i + 1] <=min) {
			min = soldiers_height[i + 1];
			index_of_min_soldier = i + 1;
		}

	}
	if (index_of_max_soldier > index_of_min_soldier) {
		result = index_of_max_soldier + (a-index_of_min_soldier - 2);
	}
	else {
		result = index_of_max_soldier + (a-index_of_min_soldier - 1);

	}

	printf("%d", result);




	return 0;
}
