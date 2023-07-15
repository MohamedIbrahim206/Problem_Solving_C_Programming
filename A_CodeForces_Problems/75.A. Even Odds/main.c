#include<stdio.h>
#include<math.h>
int main() {
	long long n;
	long long k;
	//ceil(n / 2.0)
	scanf_s("%lld",&n);
	scanf_s("%lld", &k);
	long long odd_count=(n+1)/2;
	long long result = 0;
	if (k <= odd_count) {
		result = ((k - 1) * 2) + 1;
	}
	else {
		result = (k - odd_count) * 2;
	}

	printf("%lld", result);
	return 0;

}
