#include <stdio.h>
#include<ctype.h>

int main() {

	char str1[110];
	char str2[110];
	int i = 0;
	int result=0;
	fgets(str1, sizeof(str1), stdin);
	fgets(str2, sizeof(str2), stdin);
	while (str1[i] != '\0') {
		str1[i] = tolower(str1[i]);
		str2[i] = tolower(str2[i]);
		if (str1[i] > str2[i]) {
			result = 1;
			break;
		}
		else if (str1[i] < str2[i]) {
			result = -1;
			break;
		}
		i++;
	}
	printf("%d", result);


	return 0;
}
