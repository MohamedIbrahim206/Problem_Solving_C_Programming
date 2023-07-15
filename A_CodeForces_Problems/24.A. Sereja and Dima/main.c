#include<stdio.h>


int main() {
	int n; // The number of the cards of the table
	scanf_s("%d", &n);
	int sereja_points = 0;
	int dima_points = 0;
	int cards[1000];
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &cards[i]);

	}
	int a = 0, b = n - 1;
	int flag = 0;
	for (int i = 0; i < n; i++)
	{
		if (flag == 0) {
			if (cards[a] > cards[b]) {
				sereja_points += cards[a];
				a++;
			}
			else {
				sereja_points += cards[b];
				b--;

			}
		}
		else if(flag==1) {
			if (cards[a] > cards[b]) {
				dima_points += cards[a];
				a++;
			}
			else {
				dima_points += cards[b];
				b--;

			}
		}
		flag ^= 1;

	}
	printf("%d %d", sereja_points, dima_points);
	return 0;
}
