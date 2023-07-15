#include<stdio.h>

int main() {

	int n; // The number of events
	scanf_s("%d", &n);
	int a;
	int crimes_occurred = 0, officer_available = 0;
	int result = 0;
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a);
		if (a == -1 && (officer_available == 0)) {
			result++;
		}
		else if ((a == -1)&&(officer_available!=0)) {
			officer_available--;
		}
		else {
			officer_available += a;
		}
		//printf("crime = %d\n", result);
		//printf("officer = %d\n", officer_available);

	}
	printf("%d", result);
	return 0;
}
