#include<stdio.h>
#include<stdlib.h>
int main() {

	char name[102];
	fgets(name, sizeof(name), stdin);
	int result = 0;
	for (int i = 0; name[i]!='\n'; i++)
	{

		char c = name[i-1];
		if (i == 0) {
			if (abs(name[i] - 'a') > 13) {
				result += abs(abs(name[i] - 'a') - 26);
			}
			else {
				result += abs(abs(name[i] - 'a') );

			}
		}
		else {
			if (abs(name[i] - c) > 13) {
				result += abs(abs(name[i] - c) - 26);
			}
			else  {
				result += abs(abs(name[i] - c) );
			}
		}

	}
	printf("%d \n", result);

	return 0;
}
